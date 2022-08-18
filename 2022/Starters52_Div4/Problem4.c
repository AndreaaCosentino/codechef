/*Problem Text: https://www.codechef.com/submit/MINSM*/
#include <stdio.h>

#define ll long long int // Necessary.

int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n,min;
        scanf("%d",&n);
        ll v[n];
        for(int i = 0; i < n ; i++)
        {
            ll temp;
            scanf("%lld",&temp);
            if(i == 0 || min > temp)
                min = temp;
            v[i] = temp;
        }
        for(int i = 0; i < n; i++)
        {
             if (v[i]%min != 0)
                {
                    min = v[i]%min;
                    i = -1;
                }
        }
        
        printf("%lld\n",min*n);
        
    }
    return 0;
}

