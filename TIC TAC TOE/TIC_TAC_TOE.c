#include<stdio.h>

int main(){
    char game[3][3] = {{' ',' ',' '},
                       {' ',' ',' '},
                       {' ',' ',' '}};

    int n, i, j;
    int result = 0;
    char c;
    printf("---TIC TAC TOE---\n");
    for(int k = 0; k<9 ; k++){
        if(k%2==0){
            printf("Player 1 chance\n");
            c = 'X';
        }
        else{
            printf("Player 2 chance\n");
            c = 'O';
        }
        printf("Enter Place : ");
        scanf("%d", &n);

        switch(n){
            case 1: i=2; j=0; break;
            case 2: i=2; j=1; break;
            case 3: i=2; j=2; break;
            case 4: i=1; j=0; break;
            case 5: i=1; j=1; break;
            case 6: i=1; j=2; break;
            case 7: i=0; j=0; break;
            case 8: i=0; j=1; break;
            case 9: i=0; j=2; break;
            default: printf("INVALID INPUT\n");k--; continue;
        }
        if(game[i][j]==' '){
            game[i][j] = c;
        }
        else{
            printf("The spot is Already Taken!! Try another\n");
            k--;
        }
        printf("------\n");
        for(int s = 0; s<3 ; s++){
            for(int t = 0; t<3 ; t++){
                printf("%c ", game[s][t]);
            }
            printf("\n");
        }
        printf("------\n");
        printf("\n");
        if(game[0][0]==game[0][1] && game[0][1]==game[0][2] && game[0][2]==game[0][0] && (game[0][0] == 'X' || game[0][0]== 'O')){
            if(game[0][0]=='X'){
                printf("PLAYER 1 WINS\n");
            }
            else{
                printf("PLAYER 2 WINS\n");
            }
            result = 1;
            break;
        }
        else if(game[1][0]==game[1][1] && game[1][1]==game[1][2] && game[1][2]==game[1][0]  && (game[1][0] == 'X' || game[1][0]== 'O')){
            if(game[1][0]=='X'){
                printf("PLAYER 1 WINS\n");
            }
            else{
                printf("PLAYER 2 WINS\n");
            }
            result = 1;
            break;
        }
        else if(game[2][0]==game[2][1] && game[2][1]==game[2][2] && game[2][2]==game[2][0]  && (game[2][0] == 'X' || game[2][0]== 'O')){
            if(game[2][0]=='X'){
                printf("PLAYER 1 WINS\n");
            }
            else{
                printf("PLAYER 2 WINS\n");
            }
            result = 1;
            break;
        }
        else if(game[0][0]==game[1][0] && game[1][0]==game[2][0] && game[2][0]==game[0][0]  && (game[0][0] == 'X' || game[0][0]== 'O')){
            if(game[0][0]=='X'){
                printf("PLAYER 1 WINS\n");
            }
            else{
                printf("PLAYER 2 WINS\n");
            }
            result = 1;
            break;
        }
        else if(game[0][1]==game[1][1] && game[1][1]==game[2][1] && game[2][1]==game[0][1]  && (game[0][1] == 'X' || game[0][1]== 'O')){
            if(game[0][1]=='X'){
                printf("PLAYER 1 WINS\n");
            }
            else{
                printf("PLAYER 2 WINS\n");
            }
            result = 1;
            break;
        }
        else if(game[0][2]==game[1][2] && game[1][2]==game[2][2] && game[2][2]==game[0][2]  && (game[0][2] == 'X' || game[0][2]== 'O')){
            if(game[0][2]=='X'){
                printf("PLAYER 1 WINS\n");
            }
            else{
                printf("PLAYER 2 WINS\n");
            }
            result = 1;
            break;
        }
        else if(game[0][0]==game[1][1] && game[1][1]==game[2][2] && game[2][2]==game[0][0]  && (game[0][0] == 'X' || game[0][0]== 'O')){
            if(game[0][0]=='X'){
                printf("PLAYER 1 WINS\n");
            }
            else{
                printf("PLAYER 2 WINS\n");
            }
            result = 1;
            break;
        }
        else if(game[0][2]==game[1][1] && game[1][1]==game[2][0] && game[2][0]==game[0][2]  && (game[0][2] == 'X' || game[0][2]== 'O')){
            if(game[0][2]=='X'){
                printf("PLAYER 1 WINS\n");
            }
            else{
                printf("PLAYER 2 WINS\n");
            }
            result = 1;
            break;
        }
    }
    if(!result){
        printf("MATCH DRAW!!");
    }
    return 0;

}
