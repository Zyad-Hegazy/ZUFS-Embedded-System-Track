#include<stdio.h>
#include<string.h>

int main()
{
	char ch , str[30];
	
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	
	printf("\nEnter a character to find frequency: ");
	scanf("%c",&ch);
	
	int sum = 0;
	
	for (int i = 0; i < strlen(str) && str[i] != '\n'; i++)
	{
		if (ch == str[i])
			sum ++;
	}
	
	printf("frequency of %c: %d",ch,sum);

}