#include<stdio.h>

int main()
{
    int n;
    int revNum=0;
    int s;
    int temp;

    printf("Enter number\n");
    scanf("%d", &n);

    temp = n;

    while(temp ! =0)
    {
        s = temp % 10;
        revNum = revNum * 10 + s;
        temp /= 10;
    }

    if(revNum == n)
        printf("PALINDROME");
    else
        printf("NOT PALINDROME");

    return 0;
}
