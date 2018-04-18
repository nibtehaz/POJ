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

    int n;
    long long int t,v,d,last,extra;

    while(1)
    {
        getInt(n)

        if(n==-1)
            break;

        d=0;
        last=0;
        extra=0;

        while(n--)
        {
            getLong(v)
            getLong(t)

            extra=t-last;
            last=t;

            d+=v*extra;

        }

        printf("%lld miles\n",d);
    }

    return 0;
}


