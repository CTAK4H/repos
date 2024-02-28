#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, c, min, max;
	printf("Введите число 1: ");
	scanf("%d", &a);
	printf("Введите число 2: ");
	scanf("%d", &b);
	printf("Введите число 3: ");
	scanf("%d", &c);

	if (a > b && a > c)
	{
		max = a;
	}
	else if (b > a && b > c)
	{
		max = b;
	}
	if (a < b && a < c)
	{
		min = a;
	}
	else if (b < a && b < c)
	{
		min = b;
	}
	if (c < a && c < b)
	{
		min = c;
	}
	else if (a < c && b < c)
	{
		max = c;
	}

	printf("Наибольшее - %d\n", max);
	printf("Наименьшее - %d", min);





}