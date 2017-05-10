#include <stdio.h>
int main()
{
    int r, c, a[100][100], b[100][100],i, j,max,min;

    printf("Enter number of rows");
    scanf("%d", &r);
    printf("Enter number of columns");
    scanf("%d", &c);

    printf("\nEnter elements of matrix:\n");

    for(i=0; i<r; ++i)
	for(j=0; j<c; ++j)
	{
	    printf("Enter element a%d%d: ",i+1,j+1);
	    scanf("%d",&a[i][j]);
	}
	 max=a[0][0];
	 min=a[0][0];
	 for(i=0;i<r;i++)
	 {
        for(j=0;j<c;j++)
        if(a[i][j]>max)
        max=a[i][j];
        if(a[i][j]<min)
        min=a[i][j];
     }
	 printf("maximum is %d",max);
	 printf("minimum is %d",min);

return 0;

}
