#include<stdio.h>
int n;
int f(n)

{printf("%d",n);printf("\n");
 printf("0");
 f(n+1);
return 0; 
}
void main()
{
 f(5);
}
