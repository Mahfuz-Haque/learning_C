//Sum of a number
#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        sum=sum+i;
    {
        printf("The sum is :%d",sum);

    }
    return 0;
}
