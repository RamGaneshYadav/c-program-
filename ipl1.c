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
m=a[0];
for(i=0;i<n;i++)
{ for(j=i;j<k;j++){
        if(m>a[j])
         m=a[j];
}
     printf("%d",m);
}
printf("\n");
return 0;
}