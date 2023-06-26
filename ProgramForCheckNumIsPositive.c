#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a number %n");
        scanf("%d",&n);
        /* code */
    } while (n<=0/* condition */);
    return (0);
}