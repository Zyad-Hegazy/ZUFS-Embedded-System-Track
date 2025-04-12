#include <limits.h>
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
	int n , k;
	srand(time(0));
	printf("Enter the number of elements: ");
	scanf("%i", &n);
	while (n > INT_MAX || n < 0){
		printf("\nInvalid Input, Enter the number of elements again: ");
		scanf("%i", &n);
	}
	int arr[n];
	for(int i = 0; i < n; i++){
		arr[i] = (rand()%99);
		printf("%i ",arr[i]);
	}
	bool found = false;
	printf("\nEnter the element to be searched : ");
	scanf("%i", &k);
	for(int i = 0; i < n; i++){
		if (k == arr[i]){
			printf("Number found at location = %i",i+1);
			found = true;
			break;
		}
	}
	if (found == false)
		printf("Number not found");

	return 0;
}
  
