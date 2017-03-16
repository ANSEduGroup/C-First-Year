#include<stdio.h>
int main()
{
    int u;
    float b;
    printf("Enter unit \n");
    scanf("%d",&u);
    if(u<=50)
    {
        b=200;

    }
    else if(u>50 && u<=100)
    {
        b=200+(u-509)*2;
    }
    else if(u>100 && u<=200)
    {
        b=200+50*2+(u-100)*3;
    }
    else if(u>=200)
    {
        b=200+50*2+100*3+(u-200)*5;
    }
printf("Bill=%f",b);
return 0;
}
