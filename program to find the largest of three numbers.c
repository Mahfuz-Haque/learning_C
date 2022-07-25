#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b || b>a)
        {
        printf("the fast big number is :%d\n");
        }
    if(a>c || c>a)
       {
           printf("the second big number is:%d");
       }
        return 0;

}


right

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b || b>a)
        {
        printf("the fast big number is :%d\n");
        if(a>c || c>a)
       {
           printf("the second big number is:%d");
       }

       }
        return 0;

}
