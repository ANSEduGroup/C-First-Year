#include<stdio.h>
void getx();
void setx();
static int x;
main()
{



    setx();
    getx();

}

void setx()
{
    printf("Enter the value of x\n");
    scanf("%d",&x);


}
void getx()
{
    printf("x=%d",x);
}
