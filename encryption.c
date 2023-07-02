#include<stdio.h>
int main()
{
    int m=1;
do{
    int k,p,j;
    char t[100];
    printf("enter the message\n");
    scanf("%s",t);
    printf("enter the key value\n");
    scanf("%d",&k);
    printf("enter the size of message\n");
    scanf("%d",&j);
    for(int i=0;i<j;i++)//{if(t[i]==' '||(t[i]>=65&&t[i]<=90)||(t[i]>=97&&t[i]<=122))t[i]=t[i];} 
    t[i]=(t[i]+k);
    for(int i=0;i<j;i++)printf("%c",t[i]);
    printf("\nAt the reciver end \nEnter the correct key \n" );
    scanf("%d",&p);
    for(int i=0;i<j;i++)//if(t[i]==' '||(t[i]>='a'&&t[i]<='z')||(t[i]>='A'&&t[i]<='Z'))t[i]=t[i];}
    t[i]=(t[i]-p);
    for(int i=0;i<j;i++)printf("%c",t[i]);
    if(k==p)printf("\nyou got correct message\n ");
    m=0;
    printf("for encrypt again press 1 \n") ;
    scanf("%d",&m);
}while(m==1);
    return (0);
}