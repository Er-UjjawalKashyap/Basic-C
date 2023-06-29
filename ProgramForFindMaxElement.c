#include<stdio.h>
#include<limits.h>
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
int MaxOfArr(int a[],int n)
{
    int m=INT_MIN;
    for(int i=0;i<n;i++)if(m<a[i])m=a[i];
    return(m);
}
int main()
{
    int size,max;
    printf("Enter size of array");
    scanf("%d",&size);
    int a[size];
    reaad(a,size);
    max=MaxOfArr(a,size);
    printf("Maximum element in array is %d \n",max);
    return (0);
}