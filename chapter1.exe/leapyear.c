#include<stdio.h>
int main()
{
int y;
printf("enter year=");
scanf("%d",&y);

if (y%4==0)
{
    printf("%d is a leap",y);
}
else
printf("%d is not a leap year",y);
return 0;
}