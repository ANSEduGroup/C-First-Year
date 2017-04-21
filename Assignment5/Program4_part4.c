#include<stdio.h>
int main()
{
    int i,j,b,h,a;
    printf("Enter the height\n");
    scanf("%d",&h);
    for(i=1;i<=h;i++)
    {
        for(b=1;b<i;b++)
        {
            printf(" ");
        }
        a=1;
        for(j=h;j>=i;j--)
        {
            printf("%d ",a++);
        }
        printf("\n");
    }
return 0;
}
