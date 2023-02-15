//  Display string character-wise
#include<stdio.h>
int main()
{
    char s[100];
    int i=0;

    printf ("Enter your name here: ");
    //scanf("%s",s);
    gets(s);

    while(s[i]!='\0')
    {
        printf("%c\n",s[i]);
        i++;
    }
    return 0;
}
