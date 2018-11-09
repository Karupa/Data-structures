#include<stdio.h>
void main()
{
         int m;
         printf("no. of nodes=");
         scanf("%d",&m);
         int a[m][m],b[20];
         int i,j,c,k;
         for(i=0;i<m;i++)
           {
             for(j=0;j<m;j++)
                 {
                   printf("enter weight between %d and %d:",i,j);
                  scanf("%d",&c);
                  a[i][j]=c;
                  }
           }
       printf("the matrix is");printf("\n");
            for(i=0;i<m;i++)
              {
               for(j=0;j<m;j++)
                 {
                   printf("%d",a[i][j]);
                   
                   printf("\t");
                  }
                    printf("\n");
                }
         for(i=0;i<m;i++)
              {
               for(j=0;j<m;j++)
                 {
                  for(k=0;k<m;k++)
                   {
                    b[k]=a[i][j];
                    }
                  }    
               }  

       for(j=0;j<m;j++)
         { printf("%d",b[j]);
                printf("\n");}


}


                
