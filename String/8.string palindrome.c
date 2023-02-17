//string palindrome
#include<stdio.h>
int main()
{
    char a[100] ,b[100];

    printf("enter your name here to check if they are palindrome or not:");
    gets(a);

    strrev(a);

    strcpy(b,a);

    int d;

    d=strcmp(a,b);
    if (d==0)
        printf("This is palimdome");

    else
    printf("not palimdome");

}
