#include<stdio.h>
int main()
{
    int a;
    printf("enter the number \n");
    scanf("%d",&a);
    if(a%2==0)printf("Given number is even number ");
    else printf("given number is odd number  ");
    for(int i=2;i<=(a+1)/2;i++)
    {
        if(a%i==0)
        {
            printf("and given number is composite number \n");
            return (0);
        }
    }
    printf("and given number is prime number \n");
    return(0);
}