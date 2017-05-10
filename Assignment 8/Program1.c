#include<stdio.h>
int main()
{
    int res,n;
    printf("Enter the n\n");
    scanf("%d",&n);
    res=fact(n);
    printf("fact=%d",res);
return 0;
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
