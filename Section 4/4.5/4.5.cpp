#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int arr[5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, max = arr[0];

    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Наибольшее число в массиве: %d\n", max);

    return 0;
}