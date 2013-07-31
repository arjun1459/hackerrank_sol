#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,k,i=1,l,flag,count=0;
    unsigned long long un[1000000];
    scanf("%d %d",&n,&k);   
    for(l=0;l<n;l++)
        scanf("%Lu ",&un[l]);
    while(i<=k/2)
        {          
            flag=0;
            if((k%i)==0)
             {
                // printf("%d ",i);
                  for(l=0;l<n;l++)
                  {
                        if((un[l]%i)==0)
                        {
                         flag++;
                            break;
                        }                      
                  }
                 if(flag==0)        
                 count++;
             }
        i++;
        }
    flag=0;
    for(l=0;l<n;l++)
                  {
                        if((un[l]%k)==0)
                        {
                         flag++;
                            break;
                        }                      
                  }
                 if(flag==0)        
                 count++;
    if(count>0)
    printf("%d",count);
    return 0;
}

