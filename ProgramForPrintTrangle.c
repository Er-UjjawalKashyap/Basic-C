#include<stdio.h>
int main()
{
    int z=1;
    while(z==1)
    {
        int n,m;
        printf("Enter the numbers of Row(lines)\n");
        scanf("%d",&m);
        n=m;
        for(int k=0;k<m;k++)
        { 
        for (int i=n;i>0;i--) printf(" ");
        for(int j=0,p=(2*k)+1;j<p;j++) printf("*");
        printf("\n");
        n--;
        }
    printf("For restart program press 1\n For stop program press 0\n");
    scanf("%d",&z);
    }
    return(0);
}