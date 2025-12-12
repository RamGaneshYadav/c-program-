#include<stdio.h>
int main()
    {
    int i,j,r,c,r2,c2,k;
    int matrix[10][20];
    int matri[10][20];
    int mul[10][20];
    printf("first matrix data for in");
    printf("enter a row  number\n");
    scanf("%d",&r);
    printf("enter a column number\n: ");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter data in [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
    }

    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("second matrix data for in ");
    printf("enter a row  number\n");
    scanf("%d",&r2);
    printf("enter a column number\n: ");
    scanf("%d",&c2);
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("enter data in [%d][%d]:",i,j);
            scanf("%d",&matri[i][j]);
         }

    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
         printf("%d\t",matri[i][j]);
        }
        printf("\n");
    }
     printf("add of the matrix=\n");    
      for(i=0;i<r;i++)    
    {    
      for(j=0;j<c;j++)    
    {    
       mul[i][j]=0; 
      // for(k=0;k<c;k++)    
     {    
        mul[i][j]=matrix[i][j]+matri[i][j];    
     }    
     }    
    }         
   // re[i][j]=matrix[i][j]+matri[i][j];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
         printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
    }