#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int arr[5] = { 1, 2, 3, 4, 5 };
    int i, user_input, count = 0;

    printf("Введите число (Максимально - 5): ");
    scanf("%d", &user_input);

    for (i = 0; i < 5; i++) {
        if (arr[i] > user_input) {
            count++;
        }
    }

    printf("Количество чисел в массиве, которые больше введенного числа: %d\n", count);

    return 0;
}