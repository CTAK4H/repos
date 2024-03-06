#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include<conio.h>

int main()
{

	setlocale(LC_ALL, "Rus");
	int a, sum, coffe, Chocolate, chips_lite, chips_big;
	while (coffe = 1)
	{


		printf("Вставьте купюру или оплатите банковской картой \n");
		printf("Введите номинал вложенной суммы: ");
		scanf("%d", &sum);

		system("cls");
		printf("Ваш баланс %d \n", sum);

		printf("Доступные товары:\n Кофе №1 - 100 рублей\n Шоколадный батончик №2 - 150 рублей \n Чипсы (80 Грамм) №3 - 80 рублей \n Чипсы 120 (Грамм) №4 - 120 рублей \n ");

		printf(" Введите код товара: ");
		scanf("%d", &a);

		system("cls");

		printf("Ваш баланс %d", sum);

		if (a == 1 || (sum >= 100)) 
		{
			printf("Возьмите ваш товар\n");
		}
		else if (sum <= 100) 
		{
			printf("Недостаточно денег");
		}

		else if (a == 2 || (sum >= 150)) 
		{
			printf("Возьмите ваш товар\n");
		}
		else if (sum <= 150) {
			printf("Недостаточно денег");
		}

		else if (a == 3 || (sum >= 80)) {
			printf("Возьмите ваш товар\n");
		}
		else if (sum <= 80) {
			printf("Недостаточно денег");
		}

		else if (a == 4 || (sum >= 120)) {
			printf("Возьмите ваш товар\n");
		}
		else if (sum <= 120) {
			printf("Недостаточно денег");
		}

		else {
			printf("Неверный код товара");
		}
		system("cls");
	}

	

}