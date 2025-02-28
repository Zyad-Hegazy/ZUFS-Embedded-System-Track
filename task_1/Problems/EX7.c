#include<stdio.h>

int main(void){
    float a , b;
    //Input of a
    printf("Enter value of a: ");
    while(scanf("%f",&a) != 1){
        printf("Invalid input, Please enter a number: ");
        while (getchar() != '\n');
    };
    //Input of b
    printf("Enter value of b: ");
    while(scanf("%f",&b) != 1){
        printf("Invalid input, Please enter a number: ");
        while (getchar() != '\n');
    };

    a = a+b;
    b = a-b;
    a = a-b;

    //output
    printf("After swapping, value of a = %f\n", a);
    printf("After swapping, value of b = %f\n", b);
    return 0;
}
