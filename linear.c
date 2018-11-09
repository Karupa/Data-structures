#include<stdio.h>
void main()
{ 
  int a[100],n,i,j,k;
  printf("enter the size");
  scanf("%d",&n);
 for(i=0;i<n;i++)
  {
    printf("enter");
  scanf("%d",&a[i]);
   }
  printf("enter key");
 scanf("%d",&k);
 for(i=0;i<n;i++)
{
   if(k==a[i])
     {
       printf("found at%d",i);
     }
}
}
      
