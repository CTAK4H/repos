#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, answer;
	char arif_d;
	while (answer = 1000)
	{
	printf("\nВведите 1 число: ");
	scanf("%d", &a);

	printf("Введите 2 число: ");
	scanf("%d", &b);

	printf("Введите действие (/, *, +, -) : ");
	scanf(" %c", &arif_d);
	
	
	


		if (arif_d == '+')
		{
			answer = a + b;
			printf("%d + %d = %d", a, b, answer);
		}

		else if (arif_d == '-')
		{
			answer = a - b;
			printf("%d - %d = %d", a, b, answer);
		}
		else if (arif_d == '/')
		{
			answer = a / b;
			printf("%d / %d = %d", a, b, answer);
		}
		else if (arif_d == '*')
		{
			answer = a * b;
			printf("%d * %d = %d", a, b, answer);
		}
		else
		{
			printf("%d  Неверное действие", arif_d);
			return 0;
		}
	}
}