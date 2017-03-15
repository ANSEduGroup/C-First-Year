#include <stdio.h>
int main()
{
    float a,b,c,d,p1,p2;
    
    printf("Enter values of F1,F2,A1,A2\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    
    p1=a/b;
    p2=c/d;
    
    if(p1==p2)
    {
        printf("Proof Pascal principle");
    }
    else
    {
        printf("Wrong Input");
    }

    return 0;
}
