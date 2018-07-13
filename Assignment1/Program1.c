//Program to convert temperature from celsius to fahrenheit.
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in centigrate\n");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("Temperature in fahrenheit=\n%f",f);
    return 0;
}
