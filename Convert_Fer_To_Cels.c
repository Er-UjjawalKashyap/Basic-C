#include<stdio.h>
int main ()
{
    int fer=0;
    float cel=0;
    while(fer<=300)
    {
        cel =(fer-32)*5/9;
        printf("fahrenheit = %d \t celsius value = %6.3f \n",fer,cel);
        fer+=20;
    }
    return(0);

}