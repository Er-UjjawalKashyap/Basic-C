#include<stdio.h>
double pover(int x,int y)
{
    double t =1;
    if(y<0) return(1/pover(x,-y));
    for(int i=0;i<y;i++) t=t*((double)x);
    return(t);
}
int main()
{
    int a=0,b=0,z=1;
    double c=0;
    while(z!=0)
    {
    printf("Enter the base value and exponent value ");
    scanf("%d\n%d",&a,&b);
    c=pover(a,b);
    printf("%d^%d=%lf \n",a,b,c);
    printf("For restart the program enter 1 \n For stop enter 0 ");
    scanf("%d",&z);
    }
    return(0);
}