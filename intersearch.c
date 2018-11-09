#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 1000
int a[1000];
int int_p_sch(int a[],int bottom, int top, int item)
{

    int mid;

    while (bottom <= top) {

        mid = bottom + (top - bottom) * ((item - a[bottom]) / (a[top] - a[bottom]));

        if (item == a[mid])

            return mid + 1;   
              printf("%d\n",mid);
        if (item < a[mid])

            top = mid - 1;    

        else        

            bottom = mid + 1; 

    }     
    
    return -1;
  
}
int item=376375;  

void main()
{ 
  int i,pos;
  clock_t startt,endt;
   double totalt;
  
   for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
        //printf("%d",a[i]);
       // printf("\n");
     }
    printf("f");
    startt=clock();
    pos=int_p_sch(&a[0],1,n,item);
    endt=clock();
    totalt=((double)(endt-startt))/(CLOCKS_PER_SEC);
    printf("time=%lf\n",totalt);
}   
