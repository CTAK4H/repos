#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int mas[5] = { 1, 2, 3, 4, 5 };
    int i;

    for (i = 4; i >= 0; i--) {
        printf("%d ", mas[i]);
    }

    return 0;
}