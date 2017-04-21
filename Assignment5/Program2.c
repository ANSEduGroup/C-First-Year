#include<stdio.h>
int main()
{
    int n,or,r,result=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    or=n;
    while(or!=0)
    {
        r=or%10;
        result+=r*r*r;
        or/=10;
    }
    if(result==n)
        printf("%d Amstrong",n);
    else
        printf("%d Not Amstrong",n);
return 0;
}
