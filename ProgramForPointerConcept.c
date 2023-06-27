#include<stdio.h>
int main()
{
    int x,*y;
    printf("Enter X ");
    scanf("%d",&x);
    y=&x;
    printf("X=%d\n",x);
    printf("address of X=%u\n",&x);
    printf("Y=%u\n",y);
    printf("store value in Y=%d\n",*y);
    printf("address of Y=%u\n",&y);
    return(0);
}