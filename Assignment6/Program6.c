#include<stdio.h>
int main()
{
    int i,j,n,t,a[20];
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        j=i;
        while(j>0 && a[j]<a[j-1])
        {
            t=a[j];
            a[j]=a[j-1];
            a[j-1]=t;
            j--;
        }

    }
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
 return 0;
}
