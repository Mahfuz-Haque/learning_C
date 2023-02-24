//printing positice and negative number.c
#include<stdio.h>
int main()
{
    int a[100],n,i,neg=0,poss=0;
    printf("the size of array");
    scanf("%d",&n);

    printf("the elements of array:");
    for (i=0; i<n; i++)
        scanf("%d\n",&a[i]);

    for (i=0; i<n; i++)

        if (a[i]<neg)
        {
            neg=a[i];

            printf("negatives number are:%d\n",neg);
        }
        else if (a[i>poss])
        {
            poss=a[i];

            printf ("the positice numbers are:%d\n",poss);
        }
    return 0;
}
