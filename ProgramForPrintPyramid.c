#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of row you want to print pyramid \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++) printf("*");
        printf("\n");
    }
}