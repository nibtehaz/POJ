#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char inp[200];
    unsigned long long int a,b,c;
    int i,n,plus,equal;

    while(gets(inp))
    {

        n=strlen(inp);
        a=b=c=0;
        for(i=0;i<n;i++)
        {
            if(inp[i]=='+')
               plus=i;
            if(inp[i]=='=')
                {
                    equal=i;
                    break;
                }
        }

        for(i=plus-1;i>=0;i--)
        {
            if(inp[i]<=57&&inp[i]>=48)
                a=a*10+(inp[i]-48);
        }

        for(i=equal-1;i>plus;i--)
        {
            if(inp[i]<=57&&inp[i]>=48)
                b=b*10+(inp[i]-48);
        }

        for(i=n-1;i>equal;i--)
        {
            if(inp[i]<=57&&inp[i]>=48)
                c=c*10+(inp[i]-48);
        }
        if(a+b==c)
            printf("True\n");
        else
            printf("False\n");

    }


    return 0;
}
