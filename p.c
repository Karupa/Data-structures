#include<stdio.h>
void main()
{
  int i,j,k=0,n,f,a,b;
  
printf("enter n=");
scanf("%d",&n);

 /*for(i=0;i<n;i++)
  { 
    for(j=0;j<=k;j++)
       {
         printf("*");
       }
     printf("\n");
     k=k+1;
  }*/
  f=n;printf("8");
 for(a=0;a<=n;a++)
  {
     for(b=f;b<=0;b--)
         {
               printf("*");
         }
      printf("\n");
    f=f-1;
   }
} 
