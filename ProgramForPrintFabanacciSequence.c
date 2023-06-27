#include<stdio.h>
int main()
{
    int f,s,sum,count=0;
    sum=0;
    printf("Enter the first and second number of the sequence (after enter first number press Enter ) ");
    scanf("%d\n%d",&f,&s);
    printf("Enter the number of terms you want to see this series \n");
    scanf("%d",&count);
    printf("Fabanacci series %d,%d",f,s);
    while(count>0)
    {
        sum=f+s;
        printf(",%d",sum);
        f=s;
        s=sum;
        count--;
    }
    return(0);
}