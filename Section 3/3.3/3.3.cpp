#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int n, i, m;
    printf("Введите 2 числа: ");
    scanf("%d %d", &n, &m);1;



    if (n > m)
    {
        printf("Числа по возрастанию: ");
        printf("\n");
        for (int i = n; i >= m; i--) {
            printf("%d\n", i);
        }

        printf("Числа по убыванию:");
        printf("\n");
        for (int i = n; i >= m; i--)
        {
            printf("%d\n", i);
        }
    }
    else if (n < m)
    {
        printf("Числа по возрастанию: ");
        printf("\n");
        for (int i = n; i <= m; i++) {
            printf("%d\n", i);
        }

        printf("Числа по убыванию:");
        printf("\n");
        for (int i = m; i >= n; i--)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        printf("Введите разные числа");
    }

    return 0;

}