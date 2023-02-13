//print negative && Positive elements in array
#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("enter the array size:");
    scanf("%d",&n);

    printf ("Enter the array elements:");
    for (i=0; i<n; i++)
        scanf("%d\n",&a[i]);

    for (i=0; i<n; i++)
        if (a[i]>0)
        {
            printf("the number  %d is possitive\n",a[i]);

        }

        else if (a[i]<0)
        {
            printf("the number  %d is negative\n",a[i]);
        }
        else
        {
            printf("The number %d is Nutral or 0\n",a[i]);
        }
        
}
