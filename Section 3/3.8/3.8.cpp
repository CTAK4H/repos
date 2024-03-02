#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>

int main()
{


	setlocale(LC_ALL, "Rus");
	int hours, ameb = 1;




	printf("Введите количество часов (до 91 часа): ");

	scanf("%d", &hours);
	if (hours > 2 && hours < 91)
	{
		for (int i = 0; i < hours; i += 3)
		{
			ameb *= 2;
		}

		printf("Через %d часов количество амёб будет равно  %d \n", hours, ameb);
	}

	else
	{
		printf("Некоректное количество часов");
	}


}