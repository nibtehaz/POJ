#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int r,c,dp[20][20],i,j;
    char inp[80];

    while(1)
    {
        scanf("%s",inp);
        if(!strcmp(inp,"ENDOFINPUT"))
            break;
        scanf("%d%d",&r,&c);

        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                scanf("%1d",&dp[i][j]);

        r--;
        c--;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
                printf("%d",(dp[i][j]+dp[i][j+1]+dp[i+1][j]+dp[i+1][j+1])/4);

            printf("\n");

        }

        scanf("%s",inp);
    }

    return 0;
}
