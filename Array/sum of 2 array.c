//sum of 2 array.c
#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],n,i;

    printf("enter the size if a & b & c array:");
    scanf("%d",&n);

    printf("enter the elements for a arrey:");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter the elements for b arrey:");
    for (i=0;i<n;i++)
    scanf("%d",&b[i]);

for (i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }

   for (i=0;i<n;i++)
    {printf("sum %d\n",c[i]);}
}
