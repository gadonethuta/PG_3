#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

list <const char*> eki_list{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
};



int main() {
	vector<float> c = {0.0f, 0.1f, 0.2f};
	
	printf("%f\n", c[1]);
	c[1] = -3.0f;
	printf("%f\n\n", c[1]);

	vector<int> d;
	d.resize(10);
	int size = d.size();
	for (int i = 0; i < size; i++) {
		printf("%d\n", d[i]);
	}
	printf("\n");

	vector<int> e = { 1, 2, 3 };
	vector<int>::iterator it;
	it = e.begin();

	cout << *it << endl;
	it++;
	cout << *it << endl << endl;
	
	vector<string> f = { "ローソン", "ファミマ", "セブン" };
	for (vector<string>::iterator it_f = f.begin(); it_f != f.end(); it_f++) {
		cout << *it_f << endl;
	}
	cout << endl;

	vector<int> g = { 1, 2, 3 };
	g.erase(g.begin() + 1);//2を消す
	g.pop_back();//最後の変数３を消す
	for (vector<int>::iterator it_g = g.begin(); it_g != g.end(); it_g++) {
		cout << *it_g << endl;
	}

	return 0;
}

