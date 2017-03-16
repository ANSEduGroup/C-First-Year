#include<stdio.h>
int main()
{

    int n,temp,d,s=0;
    printf("Enter number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        s=s+d;
        n/=10;
    }
printf("SUM=%d",s);
return 0;

}
