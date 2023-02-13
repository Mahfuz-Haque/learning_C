//Program to find sum of array elements
#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    printf("enter the size of an array:");
    scanf("%d",&n);

    printf("enter the elements of the arrey:");
    for (i=0; i<n; i++)

        scanf("%d\n",&a[i]);

    for (i=0; i<n; i++)
    {
        sum=sum + a[i];
    }
    printf ("the sum or the array is :%d",sum);
    return 0;
}
