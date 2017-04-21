#include<stdio.h>
int main()
{
    int i,j,h,k;
    printf("Enter the height\n");
    scanf("%d",&h);
    for(i=h;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=h;k>=i;k--)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;
}
