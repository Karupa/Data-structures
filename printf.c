#include<stdio.h>
void main()
{
  int *c;
int a[10];
  for(float i=0;i<=5.0;i++)
     {
         c=&i;
         a[10]=c;
        printf("%d",c);printf("\n");
       
      }
  for(float i=0;i<5.0;i++)
     {//c=&i;
     printf("%d",c);printf("\n");}
  
  for(float i=0;i<5.0;i++)
     {//c=&i;
     printf("%lf",c);printf("\n");}
    for(float i=0;i<5.0;i++)
     {//c=&i;
     printf("%d",a[i]);printf("\n");}


}
