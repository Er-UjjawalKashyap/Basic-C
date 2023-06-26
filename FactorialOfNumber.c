#include<stdio.h>
int main()
{
    unsigned long long n;
    int t;
    printf("Enter a number for cumpute factorial %n");
    scanf("%llu",&n);
    t=n;
    for(int i=n-1;i>1;i--)n*=i;
    printf("Factorial of %d is %llu %n",t,n);
}