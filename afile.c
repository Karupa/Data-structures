#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 1000
int main()
{  FILE *f;
   int a[100];
   int i=0,j=0,t;
   f=fopen("afile.txt","W+");
  
   while(j<n)
     {
        f=fopen("afile.txt","r");
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
          fprintf(f,"%d\t",rand()%1000+1);
          
        }
         printf("\n");
     fclose(f);
}
