#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




int main()
{
    double mi,mw,ti,tw,mi2,mw2,t,Q1,Q2;


    while(scanf("%lf%lf%lf%lf",&mw,&mi,&tw,&ti)!=EOF)
    {
        ti=-ti;
        if(mw<=1e-11&&mi<=1e-11&&ti<=1e-11&&tw<=1e-11)
            break;


        Q1=mi*2.09*ti;
        Q2=mw*tw*4.19+mw*335.0;

        if((Q1-Q2)>=1e-11)
        {
            mw2=0.0;
            mi2=mi+mw;
            t=(Q2-Q1)/(mi2*2.09);
        }


        else
        {


            Q1=mi*2.09*ti+mi*335.0;
            Q2=mw*tw*4.19;


            if((Q1-Q2)>=1e-11)
            {
                mw2=(Q2-mi*2.09*ti)/(335.0);
                mi2=mi-mw2;
                mw2=mw+mw2;
                t=0.0;

            }

            else
            {
                mi2=0.0;
                mw2=mi+mw;
                t=(Q2-Q1)/(mw2*4.19);
            }
        }


        printf("%0.1lf g of ice and %0.1lf g of water at %0.1lf C\n",mi2,mw2,t);

    }


    return 0;
}

