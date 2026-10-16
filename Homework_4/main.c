#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_CTYPE, "RUS");
	int a, b, c;
	puts("введите три числа:");
	scanf("%d %d %d", &a, &b, &c);

	if ((a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0)) {
		printf("гипотеза подтверждена");
	}
	else {
		printf("гипотеза не подтверждена");
	}
	return 0;
}