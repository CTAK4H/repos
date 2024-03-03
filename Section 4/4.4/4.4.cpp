#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int arr[5] = { 1, 2, -3, -4, -5 };
    int i, count = 0;

    for (i = 0; i < 5; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }

    printf("Количество положительных чисел в массиве: %d\n", count);

    return 0;
}