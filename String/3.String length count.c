//String length count
#include<stdio.h>
int main ()
{
    char s[100];
    int i=0,count=0;

    printf("enter the name here:");
    gets(s);

    while(s[i]!='\0')
    {
        i++;
        count++;
    }
    printf("your name length is :%d",count);
    return 0;

}
