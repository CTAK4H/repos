#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int arr[5] = { 1, 2, 3, 4, 5 };
    int i, user_input;

    printf("Введите число находящиеся в массиве: ");
    scanf("%d", &user_input);

    for (i = 0; i < 5; i++) {
        if (arr[i] == user_input) 
        {
            printf("%d - Присутствует\n", user_input);
            return 0;
        }
    }

    printf("%d - Отсутствует\n", user_input);

    return 0;
}