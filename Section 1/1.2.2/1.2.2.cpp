#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	float a, b;

	printf("Введите число 2 числа через пробел: ");
	scanf("%f %f", &a, &b);

	printf("%f + %f = %f", a, b, a + b);

	printf("\n%f - %f = %f", a, b, a - b);

	printf("\n%f / %f = %f", a, b, a / b);

	printf("\n%f * %f = %f", a, b, a * b);
}
