#include <stdio.h>

void swap(short *x , short *y);
int main() 
{
	//Getting the number of elements.
	unsigned char n;
	
	printf("Enter the number of elements: ");
	scanf("%hhu",&n);
	
	/*****************************************************************/
	
	//Getting the elements from the user.
	short arr[n];
	
	printf("Enter Array elements: ");
	for (unsigned char i = 0; i < n; i++)
	{
		scanf("%hd",&arr[i]);	
	}
	
	/*****************************************************************/
	
	//Sorting Algorithm.
	for (unsigned char i = 0; i < n - 1; i++)
	{
		for (unsigned char j = 0; j < n - i - 1; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				swap(&arr[j + 1], &arr[j]);	
			}
		}
	}
	
	/*****************************************************************/
	
	//Prtinting Sorted Array.
	printf("Sorted array: ");
	for (unsigned char i = 0; i < n; i++)
	{
		printf("%hd ", arr[i]);
	}
	printf("\n");
	
    return 0;
}

void swap(short *x , short *y)
{
	short temp = *x;
	*x = *y;
	*y = temp;
}