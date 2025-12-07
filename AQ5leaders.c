#include<stdio.h>
int main()
{
	int i,j,x,n;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Leaders=");
	for(i=0;i<n;i++)
	{
		j=i+1;
		while(j<n)
		{
			if(a[i]<a[j])
			break;
			j++;
		}
	    if(j+1==n)
	    printf(" %d ",a[i]); 
	}
	printf(" %d ",a[n]);
	return 0;
}
