#include<stdio.h>

int factorial(int x);
int main()
{
	int x;
	
	//Getting the Number from the user.
	printf("Enter a posistive integer: ");
    while(scanf("%i",&x) != 1 || x <= 0){
        printf("Invalid input, Please enter a posistive Integer: ");
        while (getchar() != '\n');
    }
	factorial(x);
}
int factorial(int x){
	int sum = 1;
	if (x < 1)
		return 1;
	else
		sum *= factorial(x-1);
	return sum;
}