//comparing 2 strings if they are equal or not by strcmp()
#include<stdio.h>
int main()
{
    char a[100],b[100];

    printf("Enter your fast half name here:");
    gets(a);

    printf("Enter your second half name here:");
    gets(b);

    int d = strcmp(a,b); 
    /*if the string is equal then it will return 0. For keeping the 0 we put the string in integer value */

    if(d==0)
    {
        printf ("The strings are Equal");
    }
    else
    {
        printf("The strings are not Equal");
    }
    return 0;
}
