#include<stdio.h>

int main(){
	float mat1[2][2];
	float mat2[2][2];
	
	printf("Enter the elements of 1st matrix\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Enter a%i%i: ",i + 1, j + 1);
			scanf("%f",&mat1[i][j]);
		}
	}
	
	printf("Enter the elements of 2nd matrix\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Enter b%i%i: ",i + 1, j + 1);
			scanf("%f",&mat2[i][j]);
		}
	}
	
	printf("\nSum of Matrix: \n");
	float sum;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			sum = mat1[i][j] + mat2[i][j];
			printf("%0.2f\t", sum);
		}
		printf("\n");
	}	
	return 0;
}