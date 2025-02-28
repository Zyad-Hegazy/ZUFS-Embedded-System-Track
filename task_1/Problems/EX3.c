#include<stdio.h>

int main(void){
    int d , c;
    printf("Enter two Integers: ");
    while(scanf("%d %d", &d, &c) != 2){
        printf("Invalid input, Please enter two Integers: ");
        while(getchar() != '\n');
    }
    printf("Sum: %d\n", d+c);
    return 0;
}
