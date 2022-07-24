#include<stdio.h>
int main()
{
    int y;
    printf("Enter the Year:");
    scanf("%d",&y);
    if (y%4==0)
        printf("%d is a leap year",y);
    else if (y%100==0)
        printf("%d is not leap year");
    else if (y%400==0)
        printf("%d this is leap year");
    return 0;
}
