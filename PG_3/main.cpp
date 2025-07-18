#include <iostream>
#include <stdio.h>
#include <thread>

/// <summary>
/// threadで使うための関数
/// </summary>
/// <param name="num">threadの番号</param>
void Display(int num) {
    printf("thread %d\n", num);
}

int main() {
    //一気にjoinすると順番で並べないため一個ずつjoinします

    //thread 1
    std::thread th1(Display, 1);
    th1.join();
    
    //thread 2
    std::thread th2(Display, 2);
    th2.join();
    
    //thread 3
    std::thread th3(Display, 3);
    th3.join();

    return 0;
}
