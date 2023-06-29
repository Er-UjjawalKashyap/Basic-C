#include<stdio.h>
void reaad ( int a[],int n)
{
    printf("Enter array elements (after every element press enter )");
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
        printf(",");
    }
    printf("array element entered\n");
}
void writee (int a[], int n)
{
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    int f,s;
    printf("Enter the size of first and second array \n");
    scanf("%d %d",&f,&s);
    int a[f],b[s];
    reaad(a,f);
    reaad(b,s);
    writee(a,f);
    writee(b,s);
    return(0);
}