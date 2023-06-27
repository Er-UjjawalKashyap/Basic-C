#include <stdio.h>
void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("Enter X and Y ");
    scanf("%d\n%d",&a,&b);
    swap(&a,&b);
    printf("X=%d and Y=%d",a,b);
    return(0);
}