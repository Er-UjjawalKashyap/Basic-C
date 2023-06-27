#include<stdio.h>
#include<math.h>
int main()
{
    int m=0,n=0;
    unsigned long long p,t,r=0;
    printf("Enter the number ");
    scanf("%llu",&p);
    t=p;
    while(p!=0)
    {
        m++;
        p/=10;
    }
    p=t;
    while(p!=0)
    {
        n=p%10;
        printf("%d  %d \n",n,m);
        r=r + pow(n,m);
        p/=10;
    }
    printf("%llu %llu\n",t,r);
    if(r==t) printf("Given number is AMSTRONG number\n");
    else printf("Given number is not amstrong number\n");
    return(0);
}