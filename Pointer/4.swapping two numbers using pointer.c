//swapping two numbers using pointer
#include<stdio.h>
int main ()
{
    int a=10,b=20,temp;
    int *x,*y;

    x=&a;
    y=&b;

    temp=*x;
    *x=*y;
    *y=temp;

    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
