#include <stdio.h>

/// <summary>
/// 2つの賃金を比べる
/// </summary>
/// <param name="num1"></param>
/// <param name="num2"></param>
/// <param name="totalWage"></param>
/// <returns></returns>
int CompareWage(int hours);

int CalculateWage(int hours, int wage, int totalWage);

int main() {
	int workHours = 0;
	//働きたい時間入力
	scanf_s("%d", &workHours);

	//-1入れたらループから出る
	while (workHours != -1) {
		CompareWage(workHours);
		scanf_s("%d", &workHours);
	}
	
	return 0;
}

int CompareWage(int hours) {
	int normalWage = 1072;
	int totalNormalWage = normalWage * hours;
	int baseRecursiveWage = 100;
	int recursiveWage = 0;
	int totalRecursiveWage = CalculateWage(hours, baseRecursiveWage, recursiveWage);
	printf("一般的な賃金：%d, 再帰的な賃金：%d\n", totalNormalWage, totalRecursiveWage);
	return 0;
}

int CalculateWage(int hours, int wage, int totalWage) {
	if (hours > 1) {
		wage = (wage * 2) - 50;
		totalWage += wage;
		hours -= 1;
		return CalculateWage(hours, wage, totalWage);
	} else if (hours == 1) {
		totalWage += 100;
	}
	return totalWage;
}
