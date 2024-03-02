#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "Rus");

	int day;
	while (day = 1)
	{


		printf("\nВведите число от 1 до 7: ");
		scanf("%d", &day);

		if (day == 1)
		{
			printf("Сегодня понедельник");
		}
		else if (day == 2)
		{
			printf("Сегодня вторник");
		}
		else if (day == 3)
		{
			printf("Сегодня среда");
		}
		else if (day == 4)
		{
			printf("Сегодня четверг");
		}
		else if (day == 5)
		{
			printf("Сегодня пятница");
		}
		else if (day == 6)
		{
			printf("Сегодня субота");
		}
		else if (day == 7)
		{
			printf("Сегодня воскресенье");
		}
		else
		{
			printf("Недопустимое значение - %d", day);
			return 0;
		}
	}

}