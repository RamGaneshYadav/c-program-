#include<stdio.h>
int main()
{
int n,r,s=0,t=1;
printf("enter a bainory number");
scanf("%d",&n);
while(n!=0)
{
    r=n%16;
    s=s+r*t;
    t=t*10;
    n=n/16;
}n++;

printf("decimal number is=%d",s);
return 0;
}

