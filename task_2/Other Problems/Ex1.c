#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num , bit_num ,func_id;

    printf("Enter The Number: \n");
    while(scanf("%d",&num) != 1){
        printf("Invalid input, Please enter an Integer: ");
        while (getchar() != '\n');
    }

    printf("Enter The Bit Number: \n");
    while(scanf("%d",&bit_num)!=1){
        printf("Invalid input, Please enter an Integer: ");
        while (getchar() != '\n');
    }

    printf("Enter The Function id: \n");
    while(scanf("%d",&func_id) != 1 || func_id < 1 || func_id > 4){
        printf("Invalid input, Please enter a number between 1 and 4: ");
        while (getchar() != '\n');
    }

    switch(func_id)
    case 1:
    case 2:
    case 3:
    case 4:

    return 0;
}
