#include<stdio.h>

int main(){
	char arr[26];
	char *ptr = arr;
	
	printf("The Alphabets are : ");
	
	for (int i = 0; i < 26; i++){
		arr[i] = i+65;
		printf("%c ", *(ptr + i));
	}
	return 0;
}  
