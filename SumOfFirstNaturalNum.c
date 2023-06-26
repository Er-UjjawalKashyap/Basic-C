#include<stdio.h>
int main()
{
    int n,s;
    printf("Enter the number");
    scanf("%d",&n);
    s=(n*(n+1))/2;
    printf("Sum of first %d natural number is %d",n,s);
    return (0);
}