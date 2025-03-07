#include<stdio.h>

int main(void){
    int d;
    printf("Enter an Integer: ");
    while(scanf("%d",&d) != 1){
        printf("Invalid input, Please enter an Integer: ");
        while (getchar() != '\n');
    }
    printf("You entered: %d\n", d);
    return 0;
}
