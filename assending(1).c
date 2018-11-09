#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 100000

void main()
{
  FILE *fp,*fp1;
  int i=0,j,a[100000],t;
  fp=fopen("file.txt","r");
  srand(time(NULL));
  
 for(j=0;j<n;j++)
   {
      //fprintf(fp,"%d\n",rand()%10000+1);
      fscanf(fp,"%d\n",&a[j]);
   }
 fclose(fp);

//while(j<n)
    // {
        //printf("enter=");
     //   scanf("%d",&a[j]);
     //   j++;
     // }
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
  fp1=fopen("afile.txt","w");
 
for(j=0;j<n;j++)
{
   fprintf(fp1,"%d\n",a[j]);
}   
fclose(fp1);
}
