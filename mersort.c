#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 100000
void merge(int l, int m, int r)
{   int a[n];
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
   
    int L[n1], R[n2];
 
   
    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1+ j];
 
    
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
 
   
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
 
    
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
 int a[n];

void mergeSort(int l, int r)
{
    if (l < r)
    {
        
        int m = l+(r-l)/2;
 
        
        mergeSort(l, m);
        mergeSort(m+1, r);
 
        merge(l, m, r);
    }
}
 
int a[100000];
void main()
{ 
  int i=0;
  clock_t startt,endt,start_t,end_t;
   double totalt,total_t;
  
   for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
    startt=clock();
    mergeSort(0,100);
    endt=clock();
   // start_t=clock();
    //merge(0,50,100);
   // end_t=clock();
   totalt=((double)(endt-startt))/(CLOCKS_PER_SEC);
    printf("time=%f",totalt);
   // total_t=((double)(end_t-start_t))/(CLOCKS_PER_SEC);
   // printf("timea=%f",total_t);
}   
