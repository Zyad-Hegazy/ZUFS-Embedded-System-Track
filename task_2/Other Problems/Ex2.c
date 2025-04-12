#include <stdio.h>

bool Prime (int x);
int main(void)
{
    int x;
    while (scanf("%d",&x)!= 1 && x < 0){
        printf("Invalid Input, Please write a positive number: ");
        while (getchar() != '\n');
    }
}
bool Prime (int x)
{
    while (x < 2 || x % 2 == 0 || x % 3 == 0){
        printf("Not Prime");
        return false;
    }
    for(int i = 2; i < x; i++){
        if(x/i)
    }
}
