#include<stdio.h>
float calavg(int *a,int);
main()
{
    int n,i,a[20];float res;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    res=calavg(&a,n);
    printf("Average=%f\n",res);
}
float calavg(int *a,int n)
{
    int i;float r=0;float avg;
    for(i=0;i<n;i++)
    {
        r+=a[i];
    }
    avg=(float)r/n;
    return avg;
}
