#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void next_move(int posx, int posy, char board[5][5]) {
    int i,j,l=0,m=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(board[i][j]=='d'){
                l=i;
                m=j;
                i=5;
                j=5;
            }
        }
    }
printf("%s",(board[posx][posy]=='d'?"CLEAN":(posx<l?"DOWN":(posx>l?"UP":(posy<m?"RIGHT":"LEFT")))));
}
/* Tail starts here */
int main(void) {
    int pos[2], i;
    char board[5][5], line[6];
    scanf("%d", &pos[0]);
    scanf("%d", &pos[1]);
    for(i=0; i<5; i++) {
        scanf("%s[^\\n]%*c", line);
        strncpy(board[i], line, 5);
    }
    next_move(pos[1], pos[0], board);
    return 0;
}
