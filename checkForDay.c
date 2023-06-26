#include<stdio.h>
int main()
{
    int a;
    printf("enter number for any weekday \t");
    scanf("%d",&a);
    switch (a)
    {
    case 0:
    printf("today is Sunday"); 
        break;
    case 1:
    printf("today is Monday");
    break;
    case 2:
    printf("today is Tuesday");
    break;
    case 3:
    printf("today is Wednesday");
    break;
    case 4:
    printf("today is Thursday");
    break;
    case 5:
    printf("today is Friday");
    break;
    case 6:
    printf("today is Saturday");
    break;
    default:
    printf("you enter WRONG Weekday number");
        break;
    }
}
