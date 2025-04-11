#include <stdio.h>

/// <summary>
/// 2つの賃金を比べる
/// </summary>
/// <param name="hours">働きたい時間</param>
void CompareWage(int hours);

/// <summary>
/// 2つの賃金を比べる
/// </summary>
/// <param name="hours">残り時間</param>
/// <param name="wage">ベース</param>
/// <param name="totalWage">再帰する賃金</param>
/// <returns>トータル</returns>
int CalculateWage(int hours, int wage, int totalWage);

int main() {
	int workHours = 0;
	printf("働きたい時間を入力(-1で止まる)：");
	scanf_s("%d", &workHours);

	//-1入れたらループから出る
	while (workHours != -1) {
		CompareWage(workHours);
		printf("働きたい時間を入力(-1で止まる)：");
		scanf_s("%d", &workHours);
	}
	
	return 0;
}

void CompareWage(int hours) {
	int normalWage = 1072;
	int totalNormalWage = normalWage * hours;
	int baseRecursiveWage = 100;
	int recursiveWage = 0;

	//再帰関数を呼ぶ
	int totalRecursiveWage = CalculateWage(hours, baseRecursiveWage, recursiveWage);
	
	printf("一般的な賃金：%d, 再帰的な賃金：%d\n", totalNormalWage, totalRecursiveWage);
	
	return;
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
