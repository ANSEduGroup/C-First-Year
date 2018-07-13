//Program to calcualte kinetic energy and potential energy.
#include<stdio.h>
int main()
{
    float m,g,h,v,p,k;
    printf("Enter mass,height and velocity\n");
    scanf("%f%f%f",&m,&h,&v);
    g=9.8;
    p=m*g*h;
    k=(m*v*v)/2;
    printf("Kinetic energy\n%f",k);
    printf("Potential energy=\n%f",p);
    return 0;
}
