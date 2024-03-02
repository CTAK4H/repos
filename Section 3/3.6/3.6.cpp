#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int sum = 0;
    int num;

    while (1) {
        printf("Введите число: ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        sum += num;
        printf("Сумма: %d\n", sum);
    }

    printf("Программа завершена.\n");
    return 0;
}
