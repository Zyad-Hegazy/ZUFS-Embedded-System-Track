#include<stdio.h>
#include <limits.h>

int main(){
	int n, x, loc;
	printf("Enter the number of elements: ");
	scanf("%i", &n);
	while (n > INT_MAX || n < 0){
			printf("\nInvalid Input, Enter the number of elements again: ");
	scanf("%i", &n);
	}
	int arr[n+1];
	
	for(int i = 0; i < n; i++){
		arr[i] = i+1;
		printf("%i ",arr[i]);
	}
	printf("\nEnter the element to be inserted: ");
	scanf("%i", &x);
	
	printf("\nEnter the location: ");
	scanf("%i", &loc);
	while (loc > n+1 || loc < 1){
			printf("\nInvalid Input, Enter the location again: ");
	scanf("%i", &loc);
	}
	
	for(int i = 0; i < loc; i++){
		if (i+1 == loc){
			arr[i+1] = x;
			printf("%i ",arr[i+1]);
		}
		else{
		arr[i] = i+1;
		printf("%i ",arr[i]);
		}
	}
	
	for(int i = loc; i < n+1; i++){
		arr[i] = i;
		printf("%i ",arr[i]);
	}
	return 0;
}  
