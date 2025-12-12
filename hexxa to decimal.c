#include<stdio.h>
int main()
{
int n,r,i=1,j,temp=1;
char hexa[50];
printf("enter a any number");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
    r=temp%16;
    if(r<10)
        r=r+48;
    else
        r=r+55;

    hexa[i++]=r;
    temp=temp/16;
}
printf("hexadecimal number is :");
for(j=i-1;j>0;j--)
    printf("%c",hexa[j]);
return 0;
}

