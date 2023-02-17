//String reverse using strrev()
#include<stdio.h>
int main()
{
    char a[100];

    printf("Enter your name here:");
    gets(a);

    strrev(a);

    printf("%s",a);
    return 0;
}
