#include <stdio.h>
#include <string.h>

int main() 
{
	char s1[100];
	char s2[100];
	
	printf("Enter the first String: ");
	fgets(s1 , sizeof(s1) , stdin);
	s1[strcspn(s1, "\n")] = 0;
	

	int i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];

		i++;
	}
	s2[i] = '\0';
	
	printf("\nOriginal String : %s\n",s1);
	printf("\nCopied String : %s",s2);

    return 0;
}