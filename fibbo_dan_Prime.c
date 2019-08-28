#include<stdio.h>
#include<stdlib.h>
int check_prime(int);
int main(){
	int fibo[999];
	int countPrime=0;
	int jumPrime=0;
	int i, n, t1 = 0, t2 = 1, nextTerm;
    scanf("%d", &n);
    
    for (i = 1; i <= n+2; i++)
    {
        if(i>1){
        	fibo[i-2]=t1;

        	if(check_prime(t1)==1){
        		jumPrime=jumPrime+t1;
        		countPrime++;
        	}
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    for (i = 0; i <=n; i++)
    {
    	printf("%d ", fibo[i]);
    }
    printf("\n%d",countPrime);
    printf("\n%d\n",jumPrime);
    
}
int check_prime(int a)
{
   int c;
   for ( c = 2 ; c <= a - 1 ; c++ )
   {
      if ( a%c == 0 )
     return 0;
   }
   if ( c == a )
      return 1;
}