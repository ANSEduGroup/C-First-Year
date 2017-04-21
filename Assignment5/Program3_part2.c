#include<stdio.h>
int main()
{
    int i,b,h,j;
    printf("Enter the height\n");
    scanf("%d",&h);
    for(i=1;i<=h;i++)
    {
        for(b=1;b<=h-i;b++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
return 0;
}
