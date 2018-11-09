#include<stdio.h>
#include<time.h>

call(int n)
{
  int sum=0;
  while(n>=0)
   {
     sum=sum+n;
     
     call((n*n-n));
     //printf("\n");
    //printf("%d",call(n-1));
    n=n-1;
   }//printf("%d",sum);
}
void main()
{int n;
clock_t start,end;
 double total;
 start=clock();
  call(10);
   end=clock();
  total=((double)(end-start))/(CLOCKS_PER_SEC);
 printf("time=%lf",total);
}

