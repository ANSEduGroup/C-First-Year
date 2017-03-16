#include <stdio.h>
int main()
{
    int n, i, s=0;

    printf("Enter the value of n\n");
    scanf("%d", &n);

    for(i = 0; i <= n; i ++)
        s = s + (i * i);

    printf("Sum of the series = %d", s);

    return 0;
}
