#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>


int main()
{
    setlocale(LC_ALL, "Rus");

    int N;

    printf("Введите число N (N < 10): ");
    scanf("%d", &N);

    if (N > 10) {
        printf("некоректное значение N \n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}
