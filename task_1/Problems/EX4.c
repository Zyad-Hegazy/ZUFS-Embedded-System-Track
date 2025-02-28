#include<stdio.h>

int main(void){
    float d , c;
    printf("Enter two numbers: ");
    while(scanf("%f %f", &d, &c) != 2){
        printf("Invalid input, Please enter two numbers: ");
        while(getchar() != '\n');
    }
    printf("Product: %0.6f\n", d*c);
    return 0;
}
