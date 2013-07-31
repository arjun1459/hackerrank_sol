#include <stdio.h>
#include <string.h>
#include <math.h>
/* Head ends here */
void nextMove(int n, int x, int y, char grid[101][101])
{
    int bx,by,px,py,i,j;
    bx=x;
    by=y;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(grid[i][j]=='p')
            {
                px=i;
                py=j;
            }
        }
    }
   // printf("%d %d %d %d\n",bx,by,px,py);
    while(1)
    {
      if(bx>px)
      {
        printf("UP\n");
         break;
      }
        else if (bx<px)
      {
          //for(i=0;i<bx-px;i++)
       printf("DOWN\n");
          break;
      }
        else if(bx==px)
        {
          if(by>py)
          {
            printf("LEFT");
              break;
          }
            else
            {
            printf("RIGHT");
              break;
            }
        }
        
    }
}
/* Tail starts here */
int main(void) {

    int n, x, y;

    scanf("%d", &n);
    scanf("%d", &x);
    scanf("%d", &y);

   char grid[101][101];
    
    for(int i=0; i<n; i++) {
        scanf("%s[^\n]%*c", grid[i]);
    }

    nextMove(n, x, y, grid);
    return 0;
}
