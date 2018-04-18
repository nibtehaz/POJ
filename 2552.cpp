#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




int main()
{
    int sieve[44000],bank[3100];
    int i,j,k,cnt=0;

    sieve[0]=3;

    for(i=2;;i++)
    {
        if(sieve[i]==0)
        {
            bank[cnt]=i;
            cnt++;
            if(cnt==3018)
                break;
            k=0;
            for(j=i+1;j<44000;j++)
            {
                if(sieve[j]==0)
                    k++;

                if(k==i)
                {
                    k=0;
                    sieve[j]=1;
                }

            }
        }
    }

    while(scanf("%d",&k)!=EOF)
    {
        if(k==0)
            break;
        printf("%d\n",bank[k-1]);
    }


    return 0;
}

