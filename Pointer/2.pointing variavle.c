//pointing variavle
#include<stdio.h>
int main ()
{
    int a=10;
    int *x;

    x=&a;

    printf("%d",*x);
}
