#include<stdio.h>

int main(){
	int n;
	printf("Enter the number of data: ");
	scanf("%i",&n);
	float sum = 0 , arr[n];
	
	for(int i = 0; i < n; i++){
		printf("%i. Enter the number: ",i + 1);
		scanf("%f",&arr[i]);
		sum += arr[i];
	} 
	printf("Average = %.2f",sum/n);
	return 0;
}  
