//take two numbers as input divide them and find out quotient and remainder
#include<stdio.h>
int main()
{
    int a,b,quotient,remainder;
    printf("Ehter the numbers :");
    scanf("%d%d",&a,&b);
    quotient=a/b;
    remainder=a%b;
    printf("The quotient  :%d\n",quotient);
    printf("The remainder  :%d\n",remainder);
    return 0;

}
