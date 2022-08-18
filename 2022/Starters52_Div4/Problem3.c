/*Problem Text: https://www.codechef.com/submit/WATESTCASES*/
#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,min = -1;
	    scanf("%d",&n);
	    int s[n];
	    char v[n+1];
	    for(int i = 0; i < n; i++)
	        scanf("%d",&s[i]);
	    scanf("%s",v);
	    for(int i = 0; i < n; i++)
	    {
	        if(v[i] == '0' &&(s[i] < min || min == -1) )
	        {
	            min = s[i];
	        }
	    }
	    printf("%d\n",min);
	    
	}
	return 0;
}

