//pointer
#include<stdio.h>
int main ()
{
    int x=10,y=20,z=30;

    int *a,*b,*c;

    a=&x;
    b=&y;
    c=&z;


    printf("value of variable:%d\n",x);
    printf("address of veriable x:%d\n",&x);
    printf("address of veriable a:%d\n",a);
    printf("address content:%d\n",*a);
    printf("address of a variable :%d",&a);
    return 0;

}
