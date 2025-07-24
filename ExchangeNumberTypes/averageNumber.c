#include <stdio.h>

int main(void) {
    int num1, num2, num3;

    printf("Please enter the first integer: ");
    scanf_s("%d", &num1);

    printf("Please enter the second integer: ");
    scanf_s("%d", &num2);

    printf("Please enter the third integer: ");
    scanf_s("%d", &num3);

    double average = (num1 + num2 + num3) / 3.0; //若不用3.0, 也可直接用 (double) 3来写

    printf("Average: %f\n", average);
}