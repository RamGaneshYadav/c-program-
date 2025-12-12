// size of int char float double
#include<stdio.h>
int main()
{   int n,g;
    char c;
    float a;
    double b;
    printf("size of int =");
    n=sizeof(int);
    printf("%d\n",n);
    g=sizeof(char);
    printf("size of char =%d\n",g);
    a=sizeof(float);
    printf("size of float=%f\n",a);
    b=sizeof(double);
    printf("size of double =%lf",b);
}