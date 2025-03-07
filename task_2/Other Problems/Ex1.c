#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num , bit_num ,func_id;

    //Getting the Number from the user.
    printf("Enter The Number: \n");
    while(scanf("%d",&num) != 1){
        printf("Invalid input, Please enter an Integer: ");
        while (getchar() != '\n');
    }
    //Getting the Bit Number from the user.
    printf("Enter The Bit Number: \n");
    while(scanf("%d",&bit_num)!=1){
        printf("Invalid input, Please enter an Integer: ");
        while (getchar() != '\n');
    }
    //Getting the Function Id from the user.
    printf("Enter The Function id: \n");
    while(scanf("%d",&func_id) != 1 || func_id < 1 || func_id > 4){
        printf("Invalid input, Please enter a number between 1 and 4: ");
        while (getchar() != '\n');
    }

    switch (func_id) {
        case 1: // Set bit
            num |= (1 << bit_num);
            printf("Result after setting bit %d: %d\n", bit_num, num);
            break;

        case 2: // Clear bit
            num &= ~(1 << bit_num);
            printf("Result after clearing bit %d: %d\n", bit_num, num);
            break;

        case 3: // Toggle bit
            num ^= (1 << bit_num);
            printf("Result after toggling bit %d: %d\n", bit_num, num);
            break;

        case 4: // Read bit
            printf("Bit %d is: %d\n", bit_num, (num >> bit_num) & 1);
            break;
    }
    }

    return 0;
}
