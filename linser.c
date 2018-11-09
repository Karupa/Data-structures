#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 100000
int a[n];
int linsearch(int k)
{
   
   int i=0,j=0;
   int a[100000];
 while(i<=n)
 {
    
    if(a[i]==k)
       { printf("s");
         printf("position = %d",i);
         break;
       }
     i=i+1;
  } return 0; 
}
//int a[100000];
void main()
{ 
  int i=0;
  clock_t startt,endt;
   double totalt;
  
   for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
       
     }
    startt=clock();
    linsearch(2304);
    endt=clock();
    totalt=(double)(endt-startt)/(CLOCKS_PER_SEC);
    printf("time=%f",totalt);
}   

