/*Problem at https://www.codechef.com/problems/EZSPEAK*/
#include <stdio.h>

typedef int bool;
#define false 0
#define true 1
#define EXIT_SUCCESS 0


int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   bool difficult = false;
	   int n,d = 0;
	   scanf("%d",&n);
	   char q[n];
	   scanf("%s",q);
	   while(n--)
	   {
	        if(q[n] != 'a' && q[n] != 'e' && q[n] != 'o' && q[n] != 'u' && q[n]!= 'i')
	        { 
	            d++;
	        }else{d = 0;}
	       if(d == 4){
	       	difficult = true;
	       	break;
	       }
	   }
	   if(difficult)
	   {
	       printf("NO\n");
	   }else{printf("YES\n");}
	}
	return EXIT_SUCCESS;
}

