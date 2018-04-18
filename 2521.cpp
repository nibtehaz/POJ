#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N,M,P,C,R,O;

    while(1)
    {
        scanf("%d%d%d%d",&N,&M,&P,&C);
        if(N==0&&M==0&&P==0&&C==0)
            break;

        R=M+C-P;

        O=N+C-R;

        printf("%d\n",O);
    }

    return 0;
}

