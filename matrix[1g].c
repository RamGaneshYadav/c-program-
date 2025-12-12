#include<stdio.h>
   /*int i,j,r,c;
    int s,loc,ba=1000;
    int matrix[10][20];*/
 int main()
    {
    int i,j,r,c;
    int a,b,n,loc;
    int s,ba=1000;
    int matrix[10][20];
    s=sizeof(int);
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
     /*int a,b,n,loc;
      int s,ba=1000;*/
       printf("enter a row");
       scanf("%d",&a);
       printf("enter a column");
       scanf("%d",b);
       (n=matrix[a][b]);
      printf("%d\n",n);//matrix[0][0]);

      loc=ba+i*j+j*s;
      printf(" loction is=%d\n",loc);

      return 0;
  }
