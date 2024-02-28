#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>

int main(){
    setlocale(LC_ALL, "Rus");
                
    int n, m, i, k,f;

    printf("Введите первое число: ");
    scanf("%d", &n);
    printf("Введите второе число: ");
    scanf("%d", &m);
    printf("Введите делитель: ");
    scanf("%d", &k);

     f = 0;

    for (i = n; i <= m; i++) {
        if (i % k == 0) {
            f = 1;
            printf("%d ", i);
        }
    }

    if (!f) {
        printf("В этом диапазоне таких чисел нет");
    }

    return 0;
}