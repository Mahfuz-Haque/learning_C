// print the avarage of all value 2d array.c
#include<stdio.h>
int main()
{
    int a[100][100],i,j,row, col,sum=0,avg;
    printf("enter the row and coloum for array matrix:");
    scanf("%d%d",&row,&col);

    printf("enter the element for the matrix:");
    for (i=0;i<row;i++)
       {
        for(j=0;j<col;j++)
        scanf("%d",&a[i][j]);
       }

    sum=sum+a[i][j];
    printf("\n");

    avg=sum/(row*col);
    printf("the avarage %d",avg);
    return 0;
}
