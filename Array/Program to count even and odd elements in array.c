//Program to count even and odd elements in array
#include<stdio.h>
int main()
{
    int a[100],i,n,even=0,odd=0;

     printf("Enter the size of an array:");
     scanf("%d",&n);

     printf("Enter the element of the array:");
     for(i=0;i<n;i++)
     scanf("%d\n",&a[i]);

     for (i=0;i<n;i++)
        if (a[i]%2==0)
     {
         even++;
     }
     else
     {
         odd++;
     }
     printf ("The total odd number is :%d",odd);
     printf ("the total even number is:%d",even);
     return 0;

}
