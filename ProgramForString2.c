#include<stdio.h>
int Compare (char*p,char*q)
{
    for(;*p==*q;p++,q++) if(*p=='\0') return (0);
    return(*p-*q);
}
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
    int i,j,y;
    printf("Enter the size of strings ");
    scanf("%d %d",&i,&j);
    char s[i],t[j];
    printf("Enter first string ");
    scanf("%s",s);
    printf("Enter second string ");
    scanf("%s",t);
    printf("\nFirst string is %s\n Second string is %s \n", s,t);
    printf("Len(1)\nCompare(2)\nreverse(3)\nBy deforlt Len operation is performed\n");
    scanf("%d",&y);
    printf("%d\n",y);
    if(y==2)
    {
        i=Compare(s,t);
        if(i==0)printf("Both strings are equal\n");
        else printf("Given strings are not equal\n");
    }
    if(y==3)
    {
        reverse(s);
        reverse(t);
        printf("\nFirst string is %s\n Second string is %s \n", s,t);
    }
    else 
    {
        i=Len(s);
        j=Len(t);
        printf("Length of first string is %d\nLength of second string is %d\n",i,j);
    }
    return (0);
}
