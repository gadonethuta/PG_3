#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

template<typename T>
class Mathing {
public:
	T num1;
	T num2;

	Mathing(T _num1, T _num2) : num1(_num1), num2(_num2) {}

	T Min() {
		if (num1 < num2) {
			return num1;
		}
		return num2;
	}
};


int main() {
	Mathing<int>m1(10, 2);
	Mathing<float>m2(11.3f, 15.2f);
	Mathing<double>m3(2.0, 12314.2);

	printf("min(%d, %d) = %d\n", m1.num1, m1.num2, m1.Min());
	printf("min(%f, %f) = %f\n", m2.num1, m2.num2, m2.Min());
	printf("min(%lf, %lf) = %lf\n", m3.num1, m3.num2, m3.Min());

	return 0;
}

