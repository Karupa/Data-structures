#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 100000
int binsearch(int l,int r,int x=999994)
{
   
   int i=0,j=0,t,mid;
   int a[100000];
  if(r>=l)
  {
     mid=l+(r-1)/2;
     if(a[mib]==x)
         return mid;
     if(a[mid]>x)
         return binsearch(l,mid+1,x);
     return binsearch(l,mid-1,x);
   }
   return -1;
}
  
int a[100000];
void main()
{ 
  int i;
  clock_t startt,endt;
   double totalt;
  
   for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
    startt=clock();
    binsearch(1,100000,999994);
    endt=clock();
    totalt=((endt-startt))/(CLOCKS_PER_SEC);
    printf("time=%lf",totalt);
}   
