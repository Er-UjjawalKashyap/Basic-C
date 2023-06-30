#include<stdio.h>
void copy (char*,char*);
void Append(char*,char*);
int main ()
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
    printf("Append(1) or copy(2)\nBy deforlt Append operation is performed\n");
    scanf("%d",&y);
    printf("%d",y);
    if(y==2)copy(s,t);
    else Append(s,t);
    printf("First string %s\n",s);
    return (0);
}
void copy (char *p,char *q)
{
    while((*p++=*q++)!='\0') ;
}
void Append(char*p,char*q)
{
    int i=0,j=0;
    while(p[i]!='\0')i++;
    p[i++]=' ';
    while((p[i++]=q[j++])!='\0');
}