#include<stdio.h>
int main()
{
    int i,j,h,b;
    printf("Enter the height\n");
    scanf("%d",&h);
    for(i=1;i<=h;i++)
    {
        for(b=1;b<=i;b++)
        {
            printf(" ");
        }
        for(j=h;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");

    }
return 0;
}
