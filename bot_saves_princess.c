#include <stdio.h>
#include <string.h>
#include <math.h>
/* Head ends here */
void displayPathtoPrincess(int n, char grid[n][n]){
    int bx=1,by=1,px,py,mid,i,j;
    mid=(n-1)/2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(grid[i][j]=='p')
            {
                px=i;
                py=j;
                break;
            }
        }
    }
    while(1)
    {
      if(bx>px)
      {
        if(by>py)
        {
            for(i=0;i<mid;i++)
            printf("UP\nLEFT\n");
            break;
        }
          else              
        {
            for(i=0;i<mid;i++)
            printf("UP\nRIGHT\n");
            break;
        }
      }
        else
       {
        if(by>py)
        {
            for(i=0;i<mid;i++)
            printf("DOWN\nLEFT\n");
            break;
        }
          else              
        {
            for(i=0;i<mid;i++)
            printf("DOWN\nRIGHT\n");
            break;
        }
      }
            
    }
}
/* Tail starts here */
int main(void) {

    int m;
    scanf("%d", &m);
    char grid[m][m];
    char line[m];

    for(int i=0; i<m; i++) {
        scanf("%s", line);
        strncpy(grid[i], line, m);
    }
    displayPathtoPrincess(m,grid);
    return 0;
}
