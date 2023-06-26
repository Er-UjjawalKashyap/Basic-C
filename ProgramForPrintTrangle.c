#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the numbers of Row(lines)\n");
    scanf("%d",&m);
    if(m%2==0) m/=2;
    n=(m+1)/2;
    for(int k=0;k<m;k++)
    {
        for (int i=n;i>=0;i--) printf(" ");
        for(int j=0;j<=k;j++) printf("*");
        printf("\n");
        n--;
    }
    return(0);
}