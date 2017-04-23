#include<stdio.h>
int main()
{
    int i,n,j,temp,a[20];
    printf("Enter no. of elements\n ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
 return 0;
}
