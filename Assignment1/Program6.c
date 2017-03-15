#include<stdio.h>
int main()
{
    float m1,m2,g,r;
    printf("Enter 2 masses\n");
    scanf("%f%f",&m1,&m2);
    g=9.8;
    r=(m1+m2)*g;
    printf("Tension=\n%f",r);
    return 0;
}
