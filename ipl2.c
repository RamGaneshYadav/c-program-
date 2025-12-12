#include<stdio.h>
int main()
{
int n,k,i,j,m;
int a[11];
printf("enter a size of array");
scanf("%d",&n);
printf("enter a element in arrey");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n+1;i++)
{
    m=a[i];
for(j=i+1;j<k;j++)
    {
//m=a[i];
        if(m>a[j])
         m=a[j];

}
 printf("%d",m);
}
printf("\n");
return 0;
}
