#include<stdio.h>
int main()
{
 long int n,f=1;
  printf ("please enter a  number\n");
  scanf("%ld",&n);
  while (n>1)

  {
       f=f*n;
      n--;
    }
  printf("factorial of this number is =%ld\n",f);

  return 0;
}
