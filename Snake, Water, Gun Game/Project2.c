#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int player, computer;
    int p_score=0, c_score=0;
    char c;

    do{
        printf("Enter your Choice\n");
        printf("ENTER 0 FOR SNAKE, 1 FOR WATER AND 2 FOR GUN\n");

        srand(time(0));  // Seed once
        int lower = 0, upper = 2;
        computer = (rand() % (upper - lower + 1)) + lower;
        scanf("%d", &player);
        printf("COMPUTER CHOOSES %d\n", computer);
        if(player == computer){
            printf("COMPUTER AND YOU BOTH CHOOSES THE SAME\n");
            printf("TIE\n");
        }
        else if ((player == 0 || player == 1) && (computer == 0 || computer == 1)){
            printf("SNAKE DRINKS WATER\n");
            if(player==0){
                printf("PLAYER WINS\n");
                p_score++;
            }
            else{
                printf("COMPUTER WINS\n");
                c_score++;
            }
        }
        else if ((player == 1 || player == 2) && (computer == 1 || computer == 2)){
            printf("WATER DROWNS GUN\n");
            if(player==1){
                printf("PLAYER WINS\n");
                p_score++;
            }
            else{
                printf("COMPUTER WINS\n");
                c_score++;
            }
        }
        else if ((player == 2 || player == 0) && (computer == 2 || computer == 0)){
            printf("GUN KILLS SNAKE\n");
            if(player==2){
                printf("PLAYER WINS\n");
                p_score++;
            }
            else{
                printf("COMPUTER WINS\n");
                c_score++;
            }
        }
        printf("PLAYER SCORE = %d\n", p_score);
        printf("COMPUTER SCORE = %d\n", c_score);
        printf("\n");
        printf("ENTER A TO PLAY AGAIN!! OR ANY RANDOM KEY TO EXIT!!\n");
        scanf(" %c", &c);
        printf("\n");
        printf("\n");
    }while(c=='a' || c=='A');
    return 0;
}
