#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>

int main() {
    int n, m, sum = 0;
    setlocale(LC_ALL, "Rus");

    printf("Введите первое число: ");
    scanf("%d", &n);

    printf("Введите второе число: ");
    scanf("%d", &m);

    for (int i = n; i <= m; i++) {
        sum += i;
    }

    printf("Сумма всех чисел от %d до %d: %d", n, m, sum);



    return 0;
}
