#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>

int main() 
{
	setlocale(LC_ALL, "Rus");
	int mas[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(mas) / sizeof(mas[0]);

	printf("Чётных чисел в массиве: ");
	for (int i = 0; i < n; i++) 
	{
		if (mas[i] % 2 == 0) 
		{
			printf("%d ", mas[i]);
		}
	}
	return 0;
}
