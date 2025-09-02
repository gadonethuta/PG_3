#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

struct Point {
    int x, y;
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

// BFS pathfinding: 0 = walkable, 1 = blocked
std::vector<Point> bfsPathfinding(
    const std::vector<std::vector<int>>& grid,
    Point start,
    Point goal
) {
    int rows = grid.size();
    int cols = grid[0].size();

    // Check bounds and walkability
    auto inBounds = [&](int r, int c) {
        return r >= 0 && r < rows && c >= 0 && c < cols;
        };

    if (!inBounds(start.x, start.y) || !inBounds(goal.x, goal.y)) return {};
    if (grid[start.x][start.y] != 0 || grid[goal.x][goal.y] != 0) return {};

    // Movement directions (up, down, left, right)
    std::vector<Point> directions = { {1,0}, {-1,0}, {0,1}, {0,-1} };

    std::queue<Point> q;
    std::vector<std::vector<bool>> visited(rows, std::vector<bool>(cols, false));
    std::vector<std::vector<Point>> parent(rows, std::vector<Point>(cols, { -1,-1 }));

    q.push(start);
    visited[start.x][start.y] = true;

    while (!q.empty()) {
        Point current = q.front(); q.pop();

        if (current == goal) {
            // Reconstruct path
            std::vector<Point> path;
            for (Point p = goal; p.x != -1; p = parent[p.x][p.y]) {
                path.push_back(p);
            }
            std::reverse(path.begin(), path.end());
            return path;
        }

        for (auto d : directions) {
            Point next = { current.x + d.x, current.y + d.y };
            if (inBounds(next.x, next.y) && grid[next.x][next.y] == 0 && !visited[next.x][next.y]) {
                visited[next.x][next.y] = true;
                parent[next.x][next.y] = current;
                q.push(next);
            }
        }
    }

    return {}; // No path found
}

int main() {
    std::vector<std::vector<int>> grid = {
        {0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 1, 0},
        {1, 1, 0, 0, 0}
    };

    Point start = { 0, 0 };
    Point goal = { 3, 4 };

    auto path = bfsPathfinding(grid, start, goal);

    if (path.empty()) {
        std::cout << "No path found\n";
    } else {
        std::cout << "Path:\n";
        for (auto& p : path) {
            std::cout << "(" << p.x << ", " << p.y << ")\n";
        }
    }

    return 0;
}
