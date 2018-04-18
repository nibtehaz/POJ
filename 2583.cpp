#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




int main()
{
    int a,b,c,f0,f1,f2;

    while(scanf("%d%d%d",&f0,&f1,&f2)!=EOF)
    {
        c=f0;
        a=(f2-2*f1+c)/2;
        b=f1-c-a;

        printf("%d %d %d\n",a*9+3*b+c,a*16+4*b+c,a*25+5*b+c);
    }

    return 0;
}

