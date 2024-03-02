#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, des, ed;
	printf("Введите 2-ух значное число: ");
	scanf("%d", &a);
	if (a <= 9 || a >= 100)
	{
		printf("Недопустимое значение - %d", a);
	}
	des = a / 10;
	ed = a - (des * 10);
	printf("%d %d", des, ed);

}