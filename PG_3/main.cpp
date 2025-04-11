#include <stdio.h>
/// <summary>
/// 小さい変数を返す関数
/// </summary>
/// <typeparam name="Type">テンプレートで数字ができる</typeparam>
/// <param name="num1">数字１</param>
/// <param name="num2">数字２</param>
/// <returns>小さい数字</returns>
template <typename Type>
Type Min(Type num1, Type num2);

/// <summary>
/// char型なら比べないためのテンプレートオーバーライト
/// </summary>
/// <param name="char1">文字１</param>
/// <param name="char2">文字２</param>
/// <returns>プリントして\n返す</returns>
template <>
char Min<char>(char char1, char char2);

int main() {
	//int, float, double　型の関数
	printf("%d\n", Min<int>(1, 2));
	printf("%f\n", Min<float>(2.5f, 2.1f));
	printf("%f\n", Min<double>(2125533.5, 212111.1));

	//char 型の関数
	printf("%c\n", Min<char>('A', 'a'));
	return 0;
}

template<typename Type>
Type Min(Type num1, Type num2) {
	if (num1 < num2) {//num1が小さいなら
		return static_cast<Type>(num1);
	} else {//num2が小さいかnum1を同じな場合
		return static_cast<Type>(num2);
	}
}

//テンプレートをオーバーライト
template<>
char Min(char char1, char char2) {
	printf("数字以外は代入できません");
	return '\n';
}
