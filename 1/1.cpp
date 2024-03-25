#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>  
#include <locale.h>


void task1(int n) 
{
    setlocale(LC_ALL, "Rus");
    if (n > 0) {
        printf("Число положительное\n");
    }
    else if (n < 0) {
        printf("Число отрицательное\n");
    }
    else {
        printf("Число ни отрицательное, ни положительное\n");
    }
}

void task2(int n) 
{
    setlocale(LC_ALL, "Rus");
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }
}

void task3(int n) 
{
    setlocale(LC_ALL, "Rus");
    printf("Количество цифр: %d\n", (int)log10((double)n) + 1);
}

void task4(int n) 
{
    setlocale(LC_ALL, "Rus");
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("Среднее значение цифр: %d\n", sum / (int)log10((double)n) + 1);
}

void task5(int n) 
{
    setlocale(LC_ALL, "Rus");
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    printf("Обратный порядок: %d\n", reversed);
}

int main() 
{
    setlocale(LC_ALL, "Rus");
    int n;
    printf("Введите число: ");
    scanf("%d", &n);

    task1(n);
    task2(n);
    task3(n);
    task4(n);
    task5(n);

    return 0;
}