#include<stdio.h>
int main()
{
float km,m,cm,foot,inch;
printf("enter the distance in km:");
scanf("%f",&km);
printf("distance in meter=%.2f\n",1000*km);
printf("distance in cm=%.2f\n",1000*100*km);
printf("distance in feet=%.2f\n",3280.84*km);
printf("distance in inches=%.2f",39370.08*km);
return 0;
}