#include<stdio.h>
int main()
{
    int i,n,r;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        r=n*i;
        printf("%dx%d=%d\n",n,i,r);

    }
return 0;
}
