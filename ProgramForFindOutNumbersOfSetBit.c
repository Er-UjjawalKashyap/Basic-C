#include<stdio.h>
long long unsigned NumOfSetBit(long long unsigned p)
{
    int b=0;
    for(;p!=0;p>>=1)if(p&1)b++;
    return(b);
}
int main()
{
    long long unsigned t,s;
    printf("Enter positive number ");
    scanf("%llu",&t);
    s=NumOfSetBit(t);
    printf("Number of set bit in %llu is %llu \n",t,s);
    return(0);
}