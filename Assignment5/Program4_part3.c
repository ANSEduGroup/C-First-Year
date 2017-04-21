#include<stdio.h>
int main()
{

    int i,j,h,b,count=1;
    printf("Enter the height\n");
    scanf("%d",&h);
    for(i=1;i<=h;i++)
    {
        printf("\n");
        for(b=1;b<=h-i;b++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",count%2);
            count++;
        }
        if(i%2==0)
            count=1;
        else
            count=0;
    }
return 0;
}

