#include <stdio.h>

void multiplyMatrices(int *a, int *b, int *result, int n);
void printMatrix(int *mat, int n);

int main() 
{
    int n = 3;
    int mat1[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int mat2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9} 
	};

    int result[3][3];

    multiplyMatrices(&mat1[0][0], &mat2[0][0], &result[0][0], n);

    printf("Product of matrices is:\n");
    printMatrix(&result[0][0], n);

    return 0;
}

void multiplyMatrices(int *a, int *b, int *result, int n) 
{
    for (int i = 0; i < n; i++) 
	{       
        for (int j = 0; j < n; j++) 
		{   
            *(result + i * n + j) = 0;
            for (int k = 0; k < n; k++) 
			{  
                *(result + i * n + j) += *(a + i * n + k) * *(b + k * n + j);
            }
        }
    }
}


void printMatrix(int *mat, int n) 
{
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            printf("%d ", *(mat + i * n + j));
        }
        printf("\n");
    }
}
