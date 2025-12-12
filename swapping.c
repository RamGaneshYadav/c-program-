//swapping with different type method
#include<stdio.h>
int main()
{
    int a=5,b=10;
    int x;
    int temp;
    printf("1 : Addition/Subtraction method\n");
    printf("2 : Bitwise XOR method\n");
    printf("3 : Using Variable method");

    printf("Select witch type swaping\n");
    scanf("%d",&x);
    switch (x)
    {
    case 1: 
        printf("Before swapping using addition a=%d and b= %d\n",a,b);
   //using addition and subtraction 
    a=a-b;
    b=a+b;
    a=b-a;
    printf("After swapping using addition a=%d and b= %d",a,b);
    printf("\n\n");
        break;
     case 2:
       //using bitwise xor
    printf("Before swapping using bitwise xor a=%d and b= %d\n",a,b);
     a=a^b;
     b=a^b;
     a=a^b;
     printf("After swapping using bitwise xor a=%d and b= %d",a,b);
     break;
    case 3:
    //using third variable
    printf("Before swapping using variable a=%d and b= %d\n",a,b);
         temp=a;
        a=b;
        b=temp;
        printf("After swapping using variable a=%d and b= %d",a,b);
        break;
        default:
        printf("You are press invalid input !");
        
    }
}
