#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int a,b,a_plus_b,a_minus_b;
	printf("Введите число 1: ");
	scanf("%d", &a);
	printf("Введите число 2: ");
	scanf("%d", &b);
	a_plus_b = a + b;
	printf("%d + %d = %d", a, b, a_plus_b);
	a_minus_b = a - b;
	printf("\n%d - %d = %d", a, b, a_minus_b);


}