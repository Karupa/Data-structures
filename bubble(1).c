#include<stdio.h>
int main()
{
   int a[100];
   int i=0,j=0,n,t;
   printf("enter total no. of terms=");
   scanf("%d",&n);
   while(j<n)
     {
        printf("enter=");
        scanf("%d",&a[j]);
        j++;
      }
    while(i<n-1)
      {
          j=0;
          while(j<n-1)
            {
               if(a[j]>a[j+1])
                  { 
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		   }
	        else
                    {
			j++;
		     }
             }
            i++;
       }
     for(j=0;j<n;j++)
       {
          printf("%d\t",a[j]);
          
        }
         printf("\n");
}
