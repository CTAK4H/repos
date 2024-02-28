#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	printf("Введите число: ");
	scanf("%d", &a);
	printf("Ваше число - %d", a);

}