#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    if(a > b)
    {
        if(a > c)
            printf("Max is %d", a);
        else
            printf("Max is %d", c);
    }
    else if(b > c)
        printf("Max is %d", b);
    else
        printf("Max is %d", c);

    return 0;
}
