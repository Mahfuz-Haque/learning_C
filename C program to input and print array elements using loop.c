#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf ("enter the numbers:");
    for (i=0;i<n;i++)
       scanf("%d",&a[i]);
       for (i=0;i<n;i++)
       printf("%d\n",a[i]);


}


