/*Problem at https://www.codechef.com/submit/ATM2*/
#include <stdio.h>

#define EXIT_SUCCESS 0

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k;
	    scanf("%d%d",&n,&k);
	    char v[n+1]; // The string is of lenght n, and \0 must be added at the end. Therefore, n+1 is the length.
	    for(int i = 0; i < n ; i++)
	    {
	        int temp;
	        scanf("%d",&temp);
	        if(k >= temp)
	        {
	            k -= temp;
	            v[i] = '1';
	        }else{v[i] = '0';}
	    }
	    v[n] = '\0'; // Otherwise it prints weird characters aftewards. All strings in C must be terminated by \0.
	    printf("%s\n",v);
	}
	return EXIT_SUCCESS;
}

