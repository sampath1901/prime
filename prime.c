#include<stdio.h>
int prime(int);
int i;
int main()
{

    int n,primeN;
    printf(" Input any positive number : ");
    scanf("%d",&n);
    i = n/2;
    primeN = prime(n);
   if(primeN==1)
        printf(" The number %d is a prime number. \n\n",n);
   else
      printf(" The number %d is not a prime number. \nn",n);
   return 0;
}

int prime(int n)
{
    if(i==1)
    {
        return 1;
    }
    else if(n %i==0)
    {
         return 0;
    }     
    else
       {
         i = i-1; 
         prime(n);
      }
}

