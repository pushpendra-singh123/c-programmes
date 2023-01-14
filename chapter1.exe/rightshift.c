#include<stdio.h>
int main()
{
int a,b,n;
printf("enter any number=");
scanf("%d",&a);
printf("enter bit you want to shift:");
scanf("%d",&n);
b=a>>n;
printf("value after %d bit right shift=%d",n,b);
return 0;
}