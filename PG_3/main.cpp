#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

//クラステンプレートの作成
template<typename T1, typename T2>
class Mathing {
public:
	//テンプレートクラスのメンバー変数
	T1 num1;
	T2 num2;

	//テンプレートコンストラクター
	Mathing(T1 _num1, T2 _num2) : num1(_num1), num2(_num2) {}

	//テンプレートクラスのメンバー関数
	//2つの値のなかの小さい値をreturn
	T1 Min() {
		if (num1 < num2) {//num１が小さい場合
			return static_cast<T1>(num1);
		}
		//num２が小さい場合
		return static_cast<T1>(num2);
	}
};


int main() {
	//クラス３つ作ってコンストラクターで値代入
	Mathing<int, int>m1(10, 2);
	Mathing<float, float>m2(11.3f, 15.2f);
	Mathing<double, double>m3(2.0, 12314.2);

	Mathing<int, float>m4(16, 21.6f);
	Mathing<float, double>m5(1.2f, 2.123);
	Mathing<int, double>m6(10, 9.123);

	//テンプレートクラスのなかのMinを使う
	printf("min(%d, %d) = %d\n", m1.num1, m1.num2, m1.Min());
	printf("min(%f, %f) = %f\n", m2.num1, m2.num2, m2.Min());
	printf("min(%lf, %lf) = %lf\n", m3.num1, m3.num2, m3.Min());

	printf("min(%d, %f) = %d\n", m4.num1, m4.num2, m4.Min());
	printf("min(%f, %lf) = %f\n", m5.num1, m5.num2, m5.Min());
	printf("min(%d, %lf) = %d\n", m6.num1, m6.num2, m6.Min());

	return 0;
}

