#include <stdio.h>

int main() {
    int myNum1;
    int myNum2;
    // Write C code here
    printf("Enter num 01 & num 02  \n");


    scanf("%d %d", &myNum1, &myNum2);
    // printf("Enter num 02 \n");


    printf("the given numbers are : %d , %d  \n",myNum1,myNum2 );

    if (myNum1 > myNum2){
        printf("the myNum1 is greater then myNum2 \n");
    }
    else if (myNum1 == myNum2){
         printf("the myNum1 is equal myNum2 \n");
    }

    else{
         printf("the myNum1 is less then myNum2 \n ");
    }

    return 0;
}
