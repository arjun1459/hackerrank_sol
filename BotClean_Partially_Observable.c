#include<stdio.h>
/* Head ends here */
void next_move(int posx, int posy, char board[5][5]) 
{
    int i,j,dx,dy,flag=0;
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
          flag=0;
      }
         else if(board[i][j]=='o')
         {
             dx=i;
             dy=j;
         flag=1;
         }
     }
    }
    if(flag==0)
       {
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
    if(flag==1)
    {
     if(posx<dy)
          printf("RIGHT\n");
        else if (posx>dy)
            printf("LEFT\n"); 
    else if(posy<dx)   
        printf("DOWN\n");
        else 
        printf("UP\n");  
    }
    
    
}
/* Tail starts here */
int main(void) {
    int pos[2], i;
    char board[5][5];
    scanf("%d", &pos[0]);
    scanf("%d", &pos[1]);
    for(i=0; i<5; i++) {
        scanf("%s[^\\n]%*c", board[i]);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}
