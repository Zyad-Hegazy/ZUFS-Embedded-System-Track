#include <stdio.h>
#include <string.h>

int main() 
{
	char s1[100];
	char s2[100];
	
	printf("Enter the first String: ");
	fgets(s1 , sizeof(s1) , stdin);
	s1[strcspn(s1, "\n")] = 0;
	
	printf("\nEnter the second String: ");
	fgets(s2 , sizeof(s2) , stdin);
	s2[strcspn(s2, "\n")] = 0; 
	

	int i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			printf("Stings are Identical!");
			return 0;
		}
		i++;
	}
	
	printf("Stings are not Identical");

    return 0;
}