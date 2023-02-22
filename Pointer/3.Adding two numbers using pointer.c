//Adding two numbers using pointer
#include<stdio.h>
int main ()
{
    int a=10,b=20,sum;
    int *x,*y;

    x=&a;
    y=&b;

    sum=*x+*y;

    printf("%d",sum);
}
