/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back




int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    long long int cards,a,b,c,len;

    while(1)
    {
        scanf("%lld.%lld",&a,&b);
        c=a*100+b;
        c*=10000;

        if(c==0)
            break;
        len=0;

        for(cards=1;;cards++)
        {
            len+=(1000000/(cards+1));

            if(len>=c)
                break;
        }

        printf("%lld card(s)\n",cards);

    }

    return 0;
}


