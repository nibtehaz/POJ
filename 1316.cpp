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




int state[1000001];

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int sum,temp,i;


    for(i=1;i<1000001;i++)
    {
        sum=i;
        temp=i;

        for(;;)
        {
            sum+=temp%10;
            temp=temp/10;
            if(temp==0) break;
        }
        if((sum)<1000001)state[sum]=1;
    }

     for(i=1;i<10001;i++)
     {
         if(state[i]==0)
            printf("%d\n",i);
     }



    return 0;
}
