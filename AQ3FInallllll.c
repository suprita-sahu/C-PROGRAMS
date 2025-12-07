#include<stdio.h>
int main()
{
	int i,j,c,n;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
			if(a[i]!=0)
			{
				printf(" %d ",a[i]);
            }
	}
	for(j=0;j<n;j++)
	{
		if(a[j]==0)
		printf(" %d ",a[j]);
	}
	return 0;
}
