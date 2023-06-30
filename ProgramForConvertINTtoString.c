#include<stdio.h>
int Len (char*p)
{
    int l;
    for(l=0;*p++!='\0';l++);
    return (l);
}
void reverse(char*p)
{
    int i=0;
    int j=Len(p)-1;
    char c;
    for(;i<j;i++,j--)
    {
        c=p[i];
        p[i]=p[j];
        p[j]=c;
    }
}
int main()
{
    int n,i=0,t;
    char s[100];
    printf("Enter the number ");
    scanf("%d",&n);
    if((t=n)<0)n=-n;
    for(;n>0;i++)
    {
        s[i]=n%10+'0';
        n/=10;
    }
    if(t<0)s[i++]='-';
    s[i]='\0';
    printf("String of number is %s\n",s);
    reverse(s);
    printf("String of number is %s\n",s);
    return(0);
}
