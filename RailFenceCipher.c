#include <stdio.h>
#include<string.h>
int main()
{
    int n,k;
    printf("Enter the message size\n");
    scanf("%d",&n);
    char s[n];
    printf("enter the message\n");
    scanf("%s",s);
    printf("enter the Key\n");
    scanf("%d",&k);
    char ca[k][n];
    for(int i=0;i<k;i++)
    for(int j=0;j<n;j++)ca[i][j]='\0';
    while(i>=n-1)ca[j]
    printf("enter the Cipher Text\n");
    for(int i=0;i<k;i++)
    for(int j=0;j<n;j++)if(ca[i][j]!='\0')printf("%d ",ca[i][j]);
    return(0);
}