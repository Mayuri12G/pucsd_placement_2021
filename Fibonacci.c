#include<stdio.h>
long int Fibonacci(long int);
long int Even_Fib(long int);
int main()
{
  long int n,N;
   printf(" Enter value for n : ");
   scanf("%ld",&n);
   printf("%ld \t",Fibonacci(n));
   printf("\n Enter value for Even n th Fib No as N : ");
   scanf("%ld",&N);
   printf("%ld",Even_Fib(N));
   printf("\n");
return 0;
}
long int Fibonacci(long int n)
{
  long int a=0,b=1,sum, i;
  if(n==0) return a;
  
  for(i=2;i<=n;i++)
  {
   sum=a+b;
   a=b;
   b=sum;
  }
  return sum;
}
long int Even_Fib(long int N)
{
  if(N<1) return N;
  if(N==1) return 2;
  return ((4*Even_Fib(N-1))+Even_Fib(N-2));
}
