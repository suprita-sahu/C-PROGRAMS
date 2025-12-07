#include<stdio.h>
int main()
{
	int i,n,j,k,sum=0,sumr=0,suml=0;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elemnts:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	sum=sum+a[i];
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		suml=suml+a[j];
		if(suml==sum-suml-a[i]||suml==a[i]+suml-sum)
		printf("The index is:%d",i);
	}
	return 0;
	
}
