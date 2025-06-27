#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main() {
	//駅名リスト1970年の作成
	list <const char*> eki_list{
			"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};
	cout << "1970年の山手線の駅のリスト" << endl;
	//イテレーターを作る
	list<const char*>::iterator itr = eki_list.begin();
	//番号付けるようにintの宣言
	int i = 1;
	//出力
	for (list<const char*>::iterator itr = eki_list.begin(); itr != eki_list.end(); itr++) {
		cout << i++ << ". " << *itr << endl;
	}
	cout << endl;
	
	cout << "2019年の山手線の駅のリスト" << endl;
	//イテレーターをリセット
	itr = eki_list.begin();
	//イテレーターを7個ずらす
	advance(itr, 7);
	//西日暮里駅を追加
	eki_list.insert(itr, "Nishi-Nippori");
	i = 1;//番号つけるため
	//出力
	for (list<const char*>::iterator itr = eki_list.begin(); itr != eki_list.end(); itr++) {
		cout << i++ << ". " << *itr << endl;
	}
	cout << endl;
	
	cout << "2022年の山手線の駅のリスト" << endl;
	//イテレーターをリセット
	itr = eki_list.begin();
	//イテレーターを25個ずらす
	advance(itr, 25);
	//高輪ゲートウェイ駅を追加
	eki_list.insert(itr, "Takanawa Gateway");
	i = 1;//番号つけるため
	//出力
	for (list<const char*>::iterator itr = eki_list.begin(); itr != eki_list.end(); itr++) {
		cout << i++ << ". " << *itr << endl;
	}
	
	return 0;
}

