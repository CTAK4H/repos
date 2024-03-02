#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>


int main()
{
    setlocale(LC_ALL, "Rus");

    int height;
    printf("Введите чисо: ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}