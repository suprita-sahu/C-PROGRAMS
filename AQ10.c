#include<stdio.h>
int main()
{
	int i,j,k,R,C,sum1=0,sum2=0;
	printf("Enter size of array:\n");
	scanf("%d%d",&R,&C);
	int a[R][C];
	printf("Enter elements:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
	     scanf("%d",&a[i][j]);
	 }
	 printf("The reversed row matrix is:\n");
	 for(i=0;i<R;i++)
	 {
	 	for(j=0;j<C;j++)
	 	printf("%d",a[i][j]);
	 	printf("\n");
	 }
	 return 0;
}
