#include<stdio.h>
/* Head ends here */
void next_move(int posx, int posy, int dimx, int dimy, char board[50][50])
{
    int i,j,dx,dy;
    for(i=0;i<dimx;i++)
    {
      for(j=0;j<dimy;j++)
      {
       if(board[i][j]=='d')
       {
         dx=i;
           dy=j;
           i=dimx;
           j=dimy;
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
/* Tail starts here */
int main(void) {
    int pos[2], dim[2], i;
    char board[50][50];
    scanf("%d", &pos[0]);
    scanf("%d", &pos[1]);
    scanf("%d", &dim[0]);
    scanf("%d", &dim[1]);
    for(i=0; i<dim[0]; i++) {
        scanf("%s[^\\n]%*c", board[i]);
    }
    next_move(pos[0], pos[1],dim[0],dim[1], board);
    return 0;
}
