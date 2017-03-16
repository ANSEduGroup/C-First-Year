#include <stdio.h>
int main()
{
    int i, m, n, p = 1;

    printf("Enter the values of m & n\n");
    scanf("%d%d", &m, &n);

    for(i = 1; i <= n; i ++)
        p=p*m;

    printf("Result = %d", p);
    return 0;
}
