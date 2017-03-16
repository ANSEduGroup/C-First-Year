#include<stdio.h>
int main()
{

    int n,ri=0,r,o;
    printf("Enter number\n");
    scanf("%d",&n);
    o=n;
    while(n!=0)
    {

    r=n%10;
    ri=ri*10+r;
    n/=10;

    }
    if(o==ri)
        printf("PALINDROME");
    else
        printf("NOT PALINDROME");
 return 0;
}
