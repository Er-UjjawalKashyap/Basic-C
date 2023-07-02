#include <stdio.h>
void RecPrint(int n,char*p)
{
    while(n-->0)printf("%s\n",p);
}
int main()
{
    int n;
    printf("Enter the size of string\n");
    scanf("%d",&n);
    char p[n];
    printf("Enter the string ");
    scanf("%s",p);
    printf("Enter number (how many time you want print it) ");
    scanf("%d",&n);
    RecPrint(n,p);
    return(0);
}