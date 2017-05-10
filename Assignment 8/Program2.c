
#include <stdio.h>
int main()
{
    int max,min,res,res1;
    printf("enter max & min\n");
    scanf("%d%d",&max,&min);
    res=gcd(max,min);
    res1=lcm(max,min);
    printf("gcd=%d\nlcm=%d",res,res1);
    return 0;
}
int gcd(int x,int y)
{
    if(y==0)
        return 1;
    else
        return gcd(y,x%y);
}
int lcm(int a,int b)
{
    static int c=1;
    if(c%a==0 && c%b==0)
    {
        return c;
    }
    c++;
    lcm(a,b);
    return c;
}
