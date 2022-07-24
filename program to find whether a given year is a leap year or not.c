#include<stdio.h>
int main()
{
    int y,year;
    printf("Enter the Year:");
    scanf("%d",&y);
    if (year=y%4)
        printf("%d is not a leap year",y);
    else if (year=y%100)
        printf("%d is leap year");
    else if (year=y%400)
        printf("%d this is not leap year");
    return 0;
}
