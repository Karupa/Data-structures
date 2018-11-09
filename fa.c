#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 1000000
void main()
{
  FILE *fp;
  int i;
  fp=fopen("file.txt","r");
  srand(time(NULL));
 for(i=0;i<n;i++)
   {
      fprintf(fp,"%d\n",sort());
      
   }
 fclose(fp);
}
   
