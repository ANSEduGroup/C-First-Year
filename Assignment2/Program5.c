#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,r1,r2;
    
    printf("Enter values of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    
    d=(b*b)-(4*a*c);
    r1=(-b+sqrt(d))/2*a;
    r2=(-b-sqrt(d))/2*a;
    
    printf("Roots =%f\n%f",r1,r2);
    
    if(d<0)
    {
        printf("IMAGINARY\n");
    }
    else if(d==0)
    {
        printf("SAME ROOTS\n");
    }

    return 0;
}
