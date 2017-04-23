#include<stdio.h>
int main()
{
    int i,a[20],n;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array in reverse order\n");
    for(i=n-1;i>=0;i--)
        printf("%d\n",a[i]);
}
