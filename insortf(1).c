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
      fscanf(fp,"%d\n",&a[j]);
   }
 fclose(fp);

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
  fp1=fopen("dfile.txt","w");
 
for(j=0;j<n;j++)
{
   fprintf(fp1,"%d\n",a[j]);
   printf("%d\n",a[j]);
}
fclose(fp1);
}
