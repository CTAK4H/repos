#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() 
{
	setlocale(LC_ALL, "Rus");
	int N;
	printf("Введте число: ");
	scanf("%d", &N);

	if (N >= 1) 
	{
		for (int i = 1; i <= N; i++) 
		{
			printf("%d ", i);
		}
	}

	else 
	{
		for (int i = 1; i >= N; i--) 
		{
			printf("%d ", i);
		}
	}

	return 0;

}