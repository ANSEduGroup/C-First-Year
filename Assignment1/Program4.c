#include<stdio.h>
int main()
{
    float v,t,f,w,p;
    printf("Enter velocity,time and force\n");
    scanf("%f%f%f",&v,&t,&f);
    w=f*v*t;
    printf("Work=\n%f",w);
    p=w/t;
    printf("Power=\n%f",p);
    return 0;
}
