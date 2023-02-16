//Copying string to another string
#include<stdio.h>
int main ()
{
    char s[100], c[100] ;

    printf("enter Your name :");
    gets(s);
    {
        strcpy(c,s);
    }
    printf("Source name is :%s",s);
    printf("copyed to:%s",c);
    return 0;

}
