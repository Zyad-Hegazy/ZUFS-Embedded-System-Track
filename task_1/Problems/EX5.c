#include<stdio.h>
#include<ctype.h>

int main(void){
    char ch;
    printf("Enter a character: ");
    while(scanf("%c", &ch) != 1 || !isalpha(ch)){
        printf("Invalid input, Please enter a Character: ");
        while (getchar() != '\n');
    }
    printf("ASCII value of %c = %d\n",ch, ch);
    return 0;
}
