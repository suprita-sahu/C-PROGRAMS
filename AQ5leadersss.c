#include<stdio.h>
int main()
{
	int i,j,k,n,sum1=0,sum2=0;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n-1;i++)
	{
		for(j=0;j<i;j++)
		sum1=sum1+a[j];
		for(k=i+1;k<n;k++)
		sum2=sum2+a[k];
		if(sum1==sum2)
		{
	break;	
		printf("The Equilibrium index is:%d",i);

	}
	}
return 0;
}
