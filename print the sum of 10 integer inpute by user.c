#include<stdio.h>
int main()
{
    int a[500],n,i,sum=0;
    printf ("enter the size of an array:");
    scanf ("%d",&n);
    printf("enter the numbers:");
    for (i=0;i<n;i++)
    {scanf("%d\n",&a[i]);}
    for (i=0;i<n;i++)
    {
        sum=sum + a[i];
    }
    printf("%d",sum);
    return 0;
}
