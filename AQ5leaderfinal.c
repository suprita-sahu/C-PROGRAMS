#include<stdio.h>
int main()
{
	int i,j,n,k,flag=0,count=0;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	int a[n],b[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Leaders=");
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-1;j++)
		{
			if(a[i]<=a[j])
			{
			 flag=1;
			 count++;
		    }
		   else if(flag==0)
		   {
		   	for(k=0;k<n-count;k++)
		   	b[k]=a[i];
		   }
	     }
}
for(i=0;i<n-count;i++)
printf(" %d ",b[i]);
	return 0;
}
