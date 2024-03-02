#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, des, ed, sot;
	printf("Введите 2-ух значное число: ");
	scanf("%d", &a);
	if (a <= 99 || a >= 1000)
	{
		printf("Недопустимое значение - %d", a);

	}

	sot = a / 100;
	des = (a / 10) % 10;
	ed = a % 10;



	printf("Сумма = %d", ed + des + sot);

}