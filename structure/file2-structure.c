#include <stdio.h>

struct car
{
    float price;
    char model[50];
};

struct bike
{
    float price2;
    char model2[50];
};

void main()
{
    struct car cr;
    struct bike bk;

    printf("Enter price and model number of car: \n");
    scanf("%f %[^\n]s", &cr.price, &cr.model);

    printf("Enter price and model number of car: \n");
    scanf("%f %[^\n]s", &bk.price2, &bk.model2);

    printf("\nName of the model of the car is %s and price is %f", cr.model, cr.price);
    printf("\nName of the model of the bike is %s and price is %f", bk.model2, bk.price2);
}