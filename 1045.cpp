#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    double Vs,R,C,w,V;
    int n;

    while(scanf("%lf%lf%lf%d",&Vs,&R,&C,&n)!=EOF)
    {
        while(n--)
        {
            scanf("%lf",&w);

            V=Vs/sqrt(R*R+(1.0/(w*w*C*C)));

            printf("%.3lf\n",V);
        }
    }



    return 0;
}


