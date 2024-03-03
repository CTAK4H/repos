#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int arr[5] = { 1, 2, 3, 4, 5 };
    int i, sum = 0;

    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }

    float average = sum / 5.0;

    printf("Среднее значение чисел массива: %f\n", average);

    return 0;
}