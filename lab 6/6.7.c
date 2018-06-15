
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


float add_args(float a, float b)
{
    return a + b;
}

float sub_args(float a, float b)
{
    return a - b;
}

float mul_args(float a, float b)
{
    return a * b;
}

float dev_args(float a, float b)
{
    return a / b;
}

int main(void)
{
    float num1, num2;
    int choice;

    float (*ptr_fun)(float, float);

    //ptr_fun=&add_args;
    //printf("%.2f\n", ptr_fun(1,2));

    printf("Podaj 2 liczby: \n");
    scanf("%f %f", &num1, &num2 );

    printf("Jaka operacje chceszwykonac?\n1-DODAWANIE\n2-ODEJMOWANIE\n3-MNOZENIE\n4-DZIELENIE\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        ptr_fun=&add_args;
        break;
    case 2:
        ptr_fun=&sub_args;
        break;
    case 3:
        ptr_fun=&mul_args;
        break;
    case 4:
        ptr_fun=&dev_args;
        break;
    }

    printf("\nWYNIK TWOJEGO DZIALANIA TO: %.2f !!!", ptr_fun(num1, num2));

    return 0;
}
