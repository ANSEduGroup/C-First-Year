#include<stdio.h>
void swap(int,int);
main()
{
    int x,y;
    printf("Enter x & y\n");
    scanf("%d%d",&x,&y);
    swap(x,y);

}
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap x=%d y=%d",a,b);

}
