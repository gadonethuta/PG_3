#include <stdio.h>

int CompareWage(int hours);

int CalculateWage(int hours, int wage, int totalWage);

int main() {
	int workHours = 0;
	//働きたい時間入力
	scanf_s("%d", &workHours);
	
	while (workHours != -1) {
		CompareWage(workHours);
		scanf_s("%d", &workHours);
	}
	
	return 0;
}

int CompareWage(int hours) {
	int normalWage = 1072;
	int totalNormalWage = normalWage * hours;
	int recursiveWage = 0;
	int totalRecursiveWage = CalculateWage(hours, 100, recursiveWage);
	printf("%d, %d\n", totalNormalWage, totalRecursiveWage);
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
