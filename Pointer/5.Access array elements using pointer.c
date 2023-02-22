//Access array elements using pointer.c
#include<stdio.h>
int main ()
{
    int a[100],i,n;

    printf("enter the size of an array:");
    scanf ("%d",&n);

    printf ("enter the element of the array:");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    int *p;
    p=&a[0];

    for (i=0; i<n; i++)
    {
        printf("%d\n",*p);
        p++;
    }
    return 0;
}
