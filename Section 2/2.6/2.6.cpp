#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int month;
	while (month = 1)

	{
		printf("Введите номер месяца (1-12): ");
		scanf("%d", &month);

		if (month == 12 || month == 1 || month == 2)
		{
			printf("Зима\n");
		}
		else if (month >= 3 && month <= 5)
		{
			printf("Весна\n");
		}
		else if (month >= 6 && month <= 8)
		{
			printf("Лето\n");
		}
		else if (month >= 9 && month <= 11)
		{
			printf("Осень\n");
		}
		else {
			printf("Ошибка\n");
		}
	}
	return 0;
}