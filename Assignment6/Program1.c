#include<stdio.h>
int main()
{
    int i,n,max,min,a[50];
    printf("enter the no. of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");

    for(i=0;i<n;i++)
    {


        scanf("%d",&a[i]);

    }
    max=a[0];
    min=a[0];


    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {

            max=a[i];
        }
        if(min>a[i])
        {

            min=a[i];
        }
    }
    printf("Max=%d ",max);
    printf("Min=%d",min);
return 0;
}
