#include <stdio.h>
int fibo(int);

int main()
{
    int num,i;
    int result;

    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Fibonacci of negative number is not possible.\n");
    }
    else
    {
        printf("\nFibonooci series is\n");
        for(i=1;i<=num;i++)
        {
            result = fibo(i);
            printf("\%d ", result);
        }
    }
    return 0;
}
int fibo(int num)
{
    if (num<2)
    {
        return num;
    }

        return(fibo(num - 1) + fibo(num - 2));

}

