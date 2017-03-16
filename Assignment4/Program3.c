#include <stdio.h>

int main()
{
    int flag = 0, n, i;

    printf("Enter the number:");
    scanf("%d", &n);

    for(i = 2; i < n; i ++)
    {
        if((n % i) == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("NOT PRIME NUMBER");
    else
        printf("PRIME NUMBER");

    return 0;
}
