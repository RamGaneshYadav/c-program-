// missing number in arrey
#include<stdio.h>
int main()
{
int i,item,n,loc=0,j;
printf("enter a size of arrey\n");
scanf("%d",&n);int arr[n-1];
printf("enter a element of arrey");
for(i=1;i<n-1;i++)
    {
scanf("%d",&arr[i]);
}
//printf("searching in a item in arrey\n");
//scanf("%d",&item);
//for(j=1;j<=n;j++)
//for(i=1;i<=n;i++)
while(i<=n)

    {
     if(arr[i]==i)
     {

         loc=1;
         break ;
     }
    }
    if(loc==1)
        printf("item is finding\n index=%d\n",i);
    else
        printf("missing number is%d",i);

return 0;
}
