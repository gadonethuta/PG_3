#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

//クラステンプレートの作成
template<typename T>
class Mathing {
public:
	//テンプレートクラスのメンバー変数
	T num1;
	T num2;

	//テンプレートコンストラクター
	Mathing(T _num1, T _num2) : num1(_num1), num2(_num2) {}

	//テンプレートクラスのメンバー関数
	//2つの値のなかの小さい値をreturn
	T Min() {
		if (num1 < num2) {//num１が小さい場合
			return num1;
		}
		//num２が小さい場合
		return num2;
	}
};


int main() {
	//クラス３つ作ってコンストラクターで値代入
	Mathing<int>m1(10, 2);
	Mathing<float>m2(11.3f, 15.2f);
	Mathing<double>m3(2.0, 12314.2);

	//テンプレートクラスのなかのMinを使う
	printf("min(%d, %d) = %d\n", m1.num1, m1.num2, m1.Min());
	printf("min(%f, %f) = %f\n", m2.num1, m2.num2, m2.Min());
	printf("min(%lf, %lf) = %lf\n", m3.num1, m3.num2, m3.Min());

	return 0;
}

