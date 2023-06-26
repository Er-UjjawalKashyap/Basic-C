#include<stdio.h>
int stringlen(char[]);
int main()
{
    char p[100]="ujjwal";
    int l;
    //printf("enter string ");
    //scanf("%s \n",p);
    l = stringlen(p);
    printf("String Length =%d",l);
    return(0);
}

int stringlen(char st [])
{
    int i=0;
    while(st[i] != '\0') i++;
    return(i);
}