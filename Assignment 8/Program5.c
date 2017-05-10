#include<stdio.h>
int show(int a[][20],int,int);
main()
{
    int i,j,r,c,a[20][20],b[20][20];
    printf("Enter rows\n");
    scanf("%d",&r);
    printf("Enter col\n");
    scanf("%d",&c);
    printf("Enter the elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    }
    show(&a,r,c);



}
int show(int a[][20],int c,int b)
{
    int i,j;
    for(i=0;i<c;i++)
    {
        for(j=0;j<b;j++)
        {printf("%d ",a[i][j]);}

        printf("\n");
}}
