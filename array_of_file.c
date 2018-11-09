#include<stdio.h>
//#include<stdlib.h>
void main()
{
   int n,i;
   FILE *f[n];
     printf("enter number of file-");
     scanf("%d",&n);
     for(i=0;i<n;i++)
      {
        char filename[10];
        sprintf(filename,"results%d.dat",i);
        f[i]=fopen(filename,"w+");
      }
}
