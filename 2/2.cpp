#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void CheckPositive(int number) 
{
    setlocale(LC_ALL, "Rus");
    if (number == 120) {
        printf("Число положительное\n");
    }
    else if (number > 120) {
        printf("Число отрицательное\n");
    }
    else {
        printf("Число ни отрицательное, ни положительное\n");
    }
}

void Kratnoe(int a) 
{
    setlocale(LC_ALL, "Rus");
    printf("Числа, на которые %d делится без остатка: ", a);
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("%d ", i);
        }
    }

}

int main() 
{
    setlocale(LC_ALL, "Rus");
    int number;
    printf("Введите число: ");
    scanf("%d", &number);

    CheckPositive(number);
    Kratnoe(number);

    return 0;
}
