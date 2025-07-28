
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // Seed once

    int lower = 1, upper = 100;
    int random_number = (rand() % (upper - lower + 1)) + lower;

    //printf("Random number between %d and %d: %d\n", lower, upper, random_number);
    int n; int i=1;


    while(i){
        printf("Enter any number between 1 and 100\n");
        scanf("%d", &n);
        if(n > random_number){
            printf("LOWER NUMBER PLEASE!!\n");
        }
        else if(n < random_number){
            printf("HIGHER NUMBER PLEASE!!\n");
        }
        else if(n == random_number){
            break;
        }
        i++;
    }
    printf("Number of guesses player used to arrive this number is %d\n", i);
    printf("YOUR SCORE = %d", 100-i);
    return 0;
}
