#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int arr[6] = { 6, 7, 8, 9, 10 };
    int i, sum = 0;

    for (i = 0; i < 6; i++) {
        sum += arr[i];
    }

    printf("Сумма чисел массива: %d\n", sum);

    return 0;
}