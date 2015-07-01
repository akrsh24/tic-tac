#include<stdio.h>
int flag=1;
char board[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void print_board();
void main()
{

    int i,j,k;
    printf("\n-----------------------WELCOME TO TIC TAC---------------------\n");

    printf("\n-----------------------WANNA ENJOY THE GAME-------------------\n");
    printf("\n-------------PLAYER 1===X||| PLAYER 2==0----------------------\n");
    print_board();
    player_turn();




}
void print_board()
{
    printf("\n\n\n");
    printf("\t %c|\t%c|\t%c",board[0][0],board[0][1],board[0][2]);
    printf("\n\t-------------------");
    printf("\n\t %c|\t%c|\t%c",board[1][0],board[1][1],board[1][2]);
    printf("\n\t-------------------");
    printf("\n\t %c|\t%c|\t%c",board[2][0],board[2][1],board[2][2]);
    printf("\n\t-------------------");

}
void player_turn()
{
    int i,j,num,r1,c1,r2,c2,k;
    int player;
    for(i=0; i<9; i++)
    {
        if(i%2==0)
        {
            printf("\nPlayer 1 chance\n");
            player=1;
            printf("Enter the number where you want to insert\n");
            scanf("%d",&num);
            r1=place_row(num);
            c1=place_column(num);
            swap1(r1,c1);
            print_board();

        }
        else
        {
            printf("\nPlayer 2 chance\n");
            player=2;
            printf("Enter the number where you want to insert\n");
            scanf("%d",&num);
            r2=place_row(num);
            c2=place_column(num);
            swap2(r2,c2);
            print_board();
            win();
        }
        k=win(player,i);
        if(k==0)
        {
            return 0;
        }
    }
    return 0;

    }

int place_row(int num)
{
    int row;
    row=(num-1)/3;
    return row;
}
int place_column(int num)
{
    int column;
    column=(num-1)%3;
    return column;
}
void swap1(int r,int c)
{
    board[r][c]='X';
}
void swap2(int r,int c)
{
    board[r][c]='O';
}
int win(int player,int turn)
{
    int num=0;
    for(num=0; num<3; num++)
    {
        if(((board[0][num]==board[1][num])&&(board[1][num]==board[2][num]))||((board[num][0]==board[num][1])&&(board[num][1]==board[num][2])))
        {
            printf("\n PLAYER %d YOU WIN \n CONGRATULATIONS!!!!! \n ",player);
            return 0;

        }
        else if(((board[0][0]==board[1][1])&&(board[1][1]==board[2][2]))||((board[0][2]==board[1][1])&&(board[1][1]==board[2][0])))
        {
            printf("\n PLAYER %d YOU WIN \n CONGRATULTIONS!!!!! \n ",player);
            return 0;
        }
        else
        {
            if(turn==9)
            {
                printf("MATCH DRAW");
                return 0;
            }
        }
    }

    return 1;
}
