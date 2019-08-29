#include<stdio.h>
#include<stdlib.h>
int check_prime(int);
int main(){
	int countPrime=0;
	int jumPrime=0;
	int i, n, t1 = 0, t2 = 1, nextTerm;
    scanf("%d", &n);
    for (i = 1; i <= n+2; i++)
    {
        if(i>1){
          printf("%d ", t1); /*Showing Fibonaccy number list*/
        	if(check_prime(t1)==1){ /*Check if the number is prime*/
        		jumPrime=jumPrime+t1; /*Calculate (sum) all number is prime */
        		countPrime++; /*Counting how many number is prime*/
        	}
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n%d",countPrime);
    printf("\n%d\n",jumPrime);
    return 0;
}

int check_prime(int a)
{
   int c, val=0;
   for ( c = 2 ; c <= a - 1 ; c++ )
   {
      if ( a%c == 0 ){
        return 0;
      }
   }
   if ( c == a ){
      val= 1;
   }
   return val;
}