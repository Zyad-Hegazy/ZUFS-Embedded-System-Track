#include<stdio.h>
#include<string.h>

int main()
{
	char str1[30],str2[30];
	
	printf("Enter a string: ");
	fgets(str1, sizeof(str1), stdin);
	
	int len = strlen(str1);
	for (int i = len; i > 1; i--)
	{
		str2[len - i ] = str1[i - 2];
	}
	str2[len] = '\n';
	
	printf("Reverse string is: %s",str2);

}