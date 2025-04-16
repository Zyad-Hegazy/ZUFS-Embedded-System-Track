#include<stdio.h>
#include<string.h>

int main()
{
	char str[30];
	
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	
	int sum = 0;
	
	for (int i = 0; i < sizeof(str) && str[i] != '\n'; i++)
	{
			sum ++;
	}
	
	printf("length of string: %d", sum);

}