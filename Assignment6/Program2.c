#include<stdio.h>
int main()
{
    int i,n,item,a[20];
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the item to be searched\n");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            printf("Found at index %d",i);
            break;
        }
        if(i==n)
            printf("Not Found");
    }
 return 0;
}
