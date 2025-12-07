#include<stdio.h>
int main()
{
	int n,i,j,x,count=0;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter elemnts:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0,j=0;i<n;i++)
	{
		if(a[i]!=0)
		{
		b[j]=a[i];
		j++;
	   }
	}
	for(i=j;j<n;j++)
	b[i]=0;
	for(i=0;i<n;i++)
	printf(" %d ",b[i]);
	return 0;
} 
