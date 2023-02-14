//C program to count negative,positive,nuturl or 0 elements in array
#include<stdio.h>
int main()
{
    int a[100],i,n,neg=0,poss=0,zero=0 ;
    printf ("enter the size of an array:");
    scanf("%d",&n);

    printf ("enter the element of the array:");
    for (i=0;i<n;i++)
        scanf("%d\n",&a[i]);

    for (i=0;i<n;i++)
        if (a[i]>0)
    {
        poss++;
    }
    else if (a[i]==0)
    {
        zero++;
        printf ("the total Nutral or 0 is:%d\n",zero);
    }
    else
    {
        neg++;
    }
    printf("the total positive number is:%d\n",poss);
    printf("the total Negitive number is:%d\n",neg);
    return 0;

}
