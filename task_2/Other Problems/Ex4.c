#include<stdio.h>

int factorial(int x);
int main()
{
    int x, result;
    
    // Getting the Number from the user.
    printf("Enter a positive integer: ");
    while(scanf("%i",&x) != 1 || x <= 0){
        printf("Invalid input, Please enter a positive Integer: ");
        while (getchar() != '\n');
    }
    
    result = factorial(x);
    printf("Factorial of %d is %d\n", x, result);
    
    return 0;
}

int factorial(int x){
    if (x <= 1)
        return 1;
    else
        return x * factorial(x-1);  
}