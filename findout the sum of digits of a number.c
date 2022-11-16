//findout the sum of digits of a number
#include<stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Ehter the number :");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
        sum=sum+i;
    {

        printf("The sum of a number is: %d",sum);

    }
    return 0;

}
