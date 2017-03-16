#include<stdio.h>
int main()
{
    float sum=0;
    int i,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/(float)i);
    }
printf("SUM=%f",sum);
return 0;
}
