#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>



int main() 
{
    setlocale(LC_ALL, "Rus");
    int price, quantity;
    printf("Цена одной ручки = : ");
    scanf("%d", &price);
    printf("Количество ручек = : ");
    scanf("%d", &quantity);

    float discountedPrice;
    int remainingPens;

    printf("Cтоимость ручек:\n");
    for (int i = 1; i <= quantity; i++) {
        remainingPens = i % 3;
        discountedPrice = price * i;
        if (remainingPens == 0) {
            discountedPrice -= price * 0.5;
        }
        printf("%d ручка(и) - %.2f Рублей\n", i, discountedPrice);
    }

    return 0;
}