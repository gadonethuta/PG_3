#include <stdio.h>

template <typename Type>
Type Min(Type num1, Type num2);

template <>
char Min<char>(char char1, char char2);

int main() {
	printf("%d\n", Min<int>(1, 2));
	printf("%f\n", Min<float>(2.5f, 2.1f));
	printf("%f\n", Min<double>(2125533.5, 212111.1));
	printf("%c\n", Min<char>('A', 'a'));
	return 0;
}

template<typename Type>
Type Min(Type num1, Type num2) {
	if (num1 < num2) {
		return static_cast<Type>(num1);
	} else {
		return static_cast<Type>(num2);
	}
}

//テンプレートをオーバーライト
template<>
char Min(char char1, char char2) {
	printf("数字以外は代入できません");
	return '\n';
}
