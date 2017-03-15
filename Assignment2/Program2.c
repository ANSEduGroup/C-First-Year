#include <stdio.h>
int main()
{
    int a,b;
    
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    
    if(a>b)
    {
        printf("%d is greater",a);
    }
    else
    {
        printf("%d is greater",b);
    }

    return 0;
}

