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
		printf("Недопустимое значение - %d\n", a);

		return 0;
	}
	des = a / 10;
	ed = a - (des * 10);

	if (des > ed)
	{
		max = des;
	}
	else if (des < ed)
	{
		max = ed;
	}
	if (des < ed)
	{
		min = des;
	}
	else if (ed < des)
	{
		min = ed;
	}
	printf("Наибольшее - %d\n", max);
	printf("Наименьшее - %d", min);


}