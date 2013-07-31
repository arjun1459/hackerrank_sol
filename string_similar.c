#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int inp,i,j,k,l,sum=0;
    char str[100000],sstr[1000000];
    scanf("%d",&inp);
    for(i=0;i<inp;i++)
    {
     scanf("%s",str);
         sum=0;
        for(j=0;j<strlen(str);j++)
        {           
          /* for(k=j,l=0;k<strlen(str);k++,l++)
           {
             sstr[l]=str[k];
           }
            sstr[l]='\0';
            for(k=0;k<strlen(sstr);k++)
            {
             if(sstr[k]==str[k])
                 sum++;
                else
                    break;
            }    */
            for(k=j,l=0;k<strlen(str);k++,l++)
            {
             if(str[k]==str[l])
                 sum++;
                else 
                    break;
            }
           // printf("%d\n",sum);
        }
        printf("%d\n",sum);
    }
    return 0;
}

