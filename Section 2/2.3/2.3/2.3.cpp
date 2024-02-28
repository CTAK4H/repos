#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, des, ed, min, max;
	printf("Введите 2-ух значное число: ");
	scanf("%d", &a);
	if (a <= 9 || a >= 100)
	{
		printf("Недопустимое значение - %d", a);

		return 0;
	}
	if (a % 2 == 0)
	{
	
	 	printf("Число чётное");
	}
	else
	{
		printf("Число нечётное");
	}
		
	




}