#include<stdio.h>
int main()
{
	int i,j,n;
printf("Enter size of array:\n");
scanf("%d",&n);
int a[n];
printf("Enter:\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
j=0;
for(i=0;i<n-1;i++)
{
	if(a[i]!=a[j])
	{
		a[++j]=a[i];
	}
}
for(i=0;i<n;i++)
printf(" %d ",a[i]);

}
