//count the number of a digit
#include<stdio.h>
int main()
{
    int n, i;
    printf ("Enter the number:");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        i++;
    }
    printf("the total numner of a digit is :%d",i);
    return 0;
}
