#include<stdio.h>
#include<string.h>
/* Head ends here */
void nextMove(int posx, int posy, char board[5][5]) 
{
    int i,j,dx,dy;
    for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
      {
       if(board[i][j]=='d')
       {
         dx=i;
           dy=j;
           i=5;
           j=5;
       }
      }
    }
    if(board[posy][posx]=='d')
        printf("CLEAN\n");
        else if(posx<dy)
          printf("RIGHT\n");
        else if (posx>dy)
            printf("LEFT\n"); 
    else if(posy<dx)   
        printf("DOWN\n");
        else 
        printf("UP\n");
}

int main(void) {
    int pos[2], i;
    char board[5][5];
    char line[5];
    scanf("%d", &pos[0]);
    scanf("%d", &pos[1]);
    for(i=0; i<5; i++) {
        scanf("%s", line);
        strncpy(board[i], line, 5);
    }
    nextMove(pos[0], pos[1], board);
    return 0;
}
