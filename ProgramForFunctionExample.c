#include<stdio.h>
int maximum(int x,int y)
{
    if(x>y) return (x);
    else return (y);
}
int main()
{
    int m,a,b;
    printf("Enter two numbers ");
    scanf("%d\n%d",&a,&b);
    m =maximum(a,b);
    printf("Maximum of %d and %d is %d",a,b,m);
    return(0);
}