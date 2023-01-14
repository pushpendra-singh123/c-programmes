#include<stdio.h>
int main()
{
int a,b;
printf("the value of a=");
scanf("%d",&a);
printf("the value of b=");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("the value after swaping a=%d\n",a);
printf("the value after swaping b=%d",b);
return 0;
}