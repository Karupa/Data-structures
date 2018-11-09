#include<stdio.h>
void main()
{
	int a[100];
	int n,i=0,j=0,t;
 printf("enter total no.=");
 scanf("%d",&n);
 while(j<n)
 {
   printf("Enter no.=");
   scanf("%d",&a[j]);
   j++;
 }
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
      }
for(j=0;j<n;j++)
       {
          printf("%d\t",a[j]);
          
        }
         printf("\n");
}
