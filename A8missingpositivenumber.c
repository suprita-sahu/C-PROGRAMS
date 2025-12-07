#include<stdio.h>
int main()
{
	int i,temp,n;
	printf("Enter size of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i+1]!=++a[i])
		{
		printf("Missing number:%d",a[i]);
		break;
	}
	}
	return 0;
}
