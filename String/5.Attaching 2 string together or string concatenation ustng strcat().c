//Attaching 2 string together or string concatenation ustng strcat()
#include<stdio.h>
int main()
{
    char a[100],b[100];

    printf("Enter your half name here:");
    gets(a);

    printf("Enter your second half name here:");
    gets(b);

    strcat(a,b);

    printf ("Your Fouu name is:%s",a);
    return 0;
}
