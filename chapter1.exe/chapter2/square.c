#include<stdio.h>
int main()
{
int a,x;
char c;
do
{
    printf("enter any no.:");
    scanf("%d",&a);
    x=a*a;
    printf("square=%d\n",x);
    printf("enter any choice= ");// choice is not working
    scanf("%c",&c);
}
while (c=='y');
return 0;
}