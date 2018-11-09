#include<stdio.h>
void main()
{
 int a[100],i=0,j,k,n,ar[100];
  printf("Enter the size");
  scanf("%d",&n);
  while(i<n)
   {
     printf("enter");
     scanf("%d",&a[i]);
     i=i+1;
   }
  while(i<n)
   {
     ar[i]=a[i];
     i=i+1;
   }
 while(i<n)
 {
   printf("%d",ar[i]);
   i=i+1;
 }
} 
  
