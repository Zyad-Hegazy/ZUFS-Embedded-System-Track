#include<stdio.h>

int main(){
	int m;
	int *ab = NULL;

	//Case: m = 29
	m = 29;
	printf("\nAddress of m = %p\n",&m);
	printf("Value of m = %i\n",m);

	
	//Case: ab is a pointer to m
	ab = &m;
	printf("\nAddress of pointer ab = %p\n",ab);
	printf("Content of pointer ab = %i\n",*ab);

	//Case: m = 34
	m = 34;
	printf("\nAddress of pointer ab = %p\n",ab);
	printf("Content of pointer ab = %i\n",*ab);

	//Case: the pointer variable ab is assigned with the value 7 now
	printf("\nAddress of m = %p\n",ab);
	*ab = 7;
	printf("Value of m = %i\n",*ab);
	return 0;
}    
