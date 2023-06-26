#include<stdio.h>
int main()
{
    double a,b;
    char o;
    printf("enter operator(+,-,*,/,%%)");
    scanf("%c",&o);
    printf("enter two numbers(after first number press enter)");
    scanf("%lf\n%lf",&a,&b);
    switch (o)
    {
    case '+':
    printf("%6.3lf + %6.3lf = %6.3lf",a,b,a+b);
        break;
    case '-':
    printf("%6.3lf - %6.3lf = %6.3lf",a,b,a-b);
        break;
        case '*':
    printf("%6.3lf * %6.3lf = %6.3lf",a,b,a*b);
        break;
        case '/':
    printf("%6.3lf  / %6.3lf = %6.3lf",a,b,a/b);
        break;
        case '%':{
    printf("%6.3lf",a);
    printf(" %% ");
    printf("%6.3lf = %d",b,(int)a %(int) b);}
        break;
    default:
    printf("you enter WRONG operator");
        break;
    }
    return (0);
}