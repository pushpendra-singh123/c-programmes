//wap. to enter radius of circle and find area,diameter & circumference.
#include<stdio.h>
int main()
{
    float r,d,area,cir;
printf("enter the radius of circle=");
scanf("%f",&r);
d=2*r;
printf("diameter=%.2f\n",d);
area=3.14*r*r;
printf("area is %.2f\n",area);
cir=2*3.14*r;
printf("circumference is %.2f",cir);
return 0;
}