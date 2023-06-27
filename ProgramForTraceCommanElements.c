#include<stdio.h>
int IsComman(int a[],int b[],int c,int d)
{
    int m[c],n=0;
    for(int i=0;i<c;i++) for(int j=0;j<d;j++) if(a[i]==a[j]) return(1);
    return(0);
}
int main()
{
    int m[100],n[100];
    int c,t;
    printf("Enter first array elements (after every element press space)\n after enter all element press 0\n ");
    for(int i=0;i<100;i++){
        scanf("%d",&c);
        if(c==0) break;
        m[i]=c;
    }
    printf("Enter second array elements (after every element press space)\n after enter all element press 0\n ");
    for(int i=0;i<100;i++){
        scanf("%d",&c);
        if(c==0) break;
        n[i]=c;
    }
    t=IsComman(m,n,100,100);
    if(t==0) printf("There is no comman element ");
    else printf("There is some comman elements ");
    return(0);
}