//take input of height, width and length and findout volume of a box
#include<stdio.h>
int main()
{
    int hight ,wight ,length ,volume;
    printf("Ehter the Hight wight and length :");
    scanf("%d%d%d",&hight,&wight,&length);
    volume=hight*wight*length;
    printf("The volume of the box is :%d",volume);
    return 0;

}
