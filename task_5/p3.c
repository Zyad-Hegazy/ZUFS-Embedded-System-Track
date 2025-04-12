#include<stdio.h>

int main(){
	int rows, columns;
	printf("Enter the number of rows and columns of the matrix: ");
	scanf("%i %i", &rows , &columns);
	float mat1[rows][columns];

	
	printf("Enter the elements of matrix\n");
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			printf("Enter a%i%i: ",i + 1, j + 1);
			scanf("%f",&mat1[i][j]);
		}
	}
	
	printf("Entered matrix\n");
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			printf("%.2f\t",mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTranspose of matrix: \n");
	for(int i = 0; i < columns; i++){
		for(int j = 0; j < rows; j++){
			printf("%.2f\t",mat1[j][i]);
		}
		printf("\n");
	}	
	return 0;
}  
