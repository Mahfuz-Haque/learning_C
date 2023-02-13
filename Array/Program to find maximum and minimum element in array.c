/*Below is the step by step descriptive logic to find maximum or minimum in array.

Input size and element in array, store it in some variable say size and arr.
Declare two variables max and min to store maximum and minimum. Assume first array element as maximum and minimum both, say max = arr[0] and min = arr[0].
Iterate through array to find maximum and minimum element in array.
Run loop from first to last array element i.e. 0 to size - 1. Loop structure should look like for(i=0; i<size; i++).
Inside loop for each array element check for maximum and minimum. 
Assign current array element to max, if (arr[i] > max). Assign current array element to min if it is less than min i.e. perform min = arr[i] if (arr[i] < min).*/


#include <stdio.h>
int main()
{
    int a[100],i,n,max=a[0],min=a[0];

    printf("Enter the size of an array :");
    scanf("%d",&n);

    printf("enter the elements or numbers:");
    for (i=0; i<n; i++)
   {
       scanf("%d\n",&a[i]);
   }

    for (i=1; i<n; i++)
        if(a[i]>max)
        {
             max=a[i];
        }

if (a[i]<min)
    {
         min=a[i];

    }

    printf("the maximum number is : %d \n",max);
    printf("the minimum number is :%d",min);

    return 0;
}

