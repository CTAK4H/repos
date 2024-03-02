#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, min, max;
	printf("Введите число 1: ");
	scanf("%d", &a);
	printf("Введите число 2: ");
	scanf("%d", &b);

	if (a > b)
	{
		max = a;
	}
	else if (b > a)
	{
		max = b;
	}
	else
	{
		printf("Числа равны");
	}
	if (a < b)
	{
		min = a;
	}
	else if (b < a)
	{
		min = b;
	}
	printf("Наибольшее - %d\n", max);
	printf("Наименьшее - %d", min);
}