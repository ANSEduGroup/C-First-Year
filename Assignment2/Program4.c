#include<stdio.h>
main()
{

    int y;
    printf("Enter a year\n");
    scanf("%d",&y);
    if((y%4==0 && y%100!=0)|| (y%400==0))
    {

        printf("LEAP YEAR\n");
    }
    else
    {

        printf("NOT A LEAP YEAR\n");
    }
}
