#include<stdio.h>

int main(){
	int n, x, loc;
	printf("Enter the number of elements: ");
	scanf("%i", &n);
	int arr[n+1];
	
	for(int i = 0; i < n; i++){
		arr[i] = i+1;
		printf("%i ",arr[i]);
	}
	printf("\nEnter the element to be inserted: ");
	scanf("%i", &x);
	
	printf("\nEnter the location: ");
	scanf("%i", &loc);
	
	for(int i = 0; i < n+1 ; i++){
		if (i+1 == loc){
			arr[loc-1] = x;
		}
		else{
		arr[i] = i+1;
		printf("%i ",arr[i]);
		}
	}
	return 0;
}  
