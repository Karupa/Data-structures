#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 1000000
int sort()
{
   
   int i=0,j=0,t;
   int a[1000000];
   
   while(i<n)
     {
        j=i;
       while(a[j]<a[j-1]&&j>0)
        {
           t=a[j];
           a[j]=a[j-1];
	   a[j-1]=t;
	   j=j-1;
        }
     i=i+1;
//printf("%d\t",i);
      }
     
}
int a[1000000];
void main()
{ 
  int i,c;
  clock_t startt,endt;
   double totalt;
  
   for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
    startt=clock();
    c=sort();
    endt=clock();
    totalt=((endt-startt))/(CLOCKS_PER_SEC);
    printf("time=%lf",totalt);
}   
