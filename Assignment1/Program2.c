#include<stdio.h>
int main()
{
    float b,d,h,g,n,t,m;
    m=300;
    printf("Enter basic salary\n");
    scanf("%f",&b);
    d=0.35*b;
    h=0.15*b;
    t=0.12*b;
    g=b+d+h+m;
    printf("Gross salary=\n%f\n",g);
    n=g-t;
    printf("Net salary=\n%f",n);
    return 0;
}
