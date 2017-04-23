#include<stdio.h>
int main()
{
    int i,n,pos,j,a[20],temp;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
        sacnf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[pos]>a[i])
            {
                pos=j;
            }
        }
        if(pos!=i)
        {
            temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;
        }
    }
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
 return 0;
}
