#include <stdio.h>
#include<string.h>
#include<math.h>


int main()
{

    int mat[105][105],x,y,L,i,j,ans,t;
    char inp[50];

    for(i=0;i<105;i++)
        for(j=0;j<105;j++)
            mat[i][j]=0;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%s%d%d%d",inp,&x,&y,&L);

        if(!strcmp(inp,"BLACK"))
        {
            for(i=x;i<x+L;i++)
                for(j=y;j<y+L;j++)
                    mat[i][j]=1;
        }


        else if(!strcmp(inp,"WHITE"))
        {
            for(i=x;i<x+L;i++)
                for(j=y;j<y+L;j++)
                    mat[i][j]=0;
        }

        else
        {
            ans=0;

            for(i=x;i<x+L;i++)
                for(j=y;j<y+L;j++)
                    if(mat[i][j]==1)
                        ans++;

            printf("%d\n",ans);
        }


    }

    return 0;
}

