//Program to calculate the sum the sum of a fraction and print the result in fraction format.
#include<stdio.h>
int main()
{
    int n1,d1,n2,d2,n3,d3;
    printf("Enter num & den for fraction1\n");
    scanf("%d%d",&n1,&d1);
    printf("Enter num & den for fraction2\n");
    scanf("%d%d",&n2,&d2);
    n3=(n1*d2)+(n2*d1);
    d3=d1*d2;
    printf("Sum=\n%d/%d",n3,d3);
    return 0;
}
