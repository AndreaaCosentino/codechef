/*Problem Text: https://www.codechef.com/submit/ACTEMP?tab=statement*/
#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
	    if(a < c)
	    {
	        a = c;
	    }
	    if(a <= b)
	    {
	        printf("Yes\n");
	    }else{printf("No\n");}
	}
	return 0;
}

