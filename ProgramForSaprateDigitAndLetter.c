#include <stdio.h>
int main()
{
    long long int t;
    int j=0;
    printf("Enter the size of string \n");
    scanf("%lld",&t);
    char s[t],p[t];
    printf("Enter string ");
    scanf("%s",s);
    t=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9') t=10*t+s[i]-'0';
        else
         {
            p[j]=s[i];
            j++;
         }
    }
    p[j]='\0';
    printf("Given number in the string is %lld\n",t);
    printf("Given Letters in the string is %s\n",p);
    return(0);
}