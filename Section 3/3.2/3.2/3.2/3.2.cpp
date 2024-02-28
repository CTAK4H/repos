#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int n,i;
    printf("Введите число: ");
    scanf("%d", &n);
    
    if (n >= 1) {
        printf("Числа по возростанию: ");
        printf("\n");
        for (i = 1; i <= n; i++) {
            printf("%d\n ", i);
        }
    }

    else (n <= 1)
    {
        printf("Числа по убыванию:");
        printf("\n");
            for (int i = -n; i >= 1; i--)
            {
                printf("-%d\n ", i);,
            }
    }

    return 0;
 
}
