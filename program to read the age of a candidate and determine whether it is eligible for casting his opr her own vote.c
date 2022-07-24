#include<stdio.h>
int main()
{
    int x;
    printf("Enter your ege: ");
    scanf("%d",&x);
    if (x>=18)
        printf("your age is:%d you can give vote",x);
    else
        printf("You can not give vote");
    return 0;
}
