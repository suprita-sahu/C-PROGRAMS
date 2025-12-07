#include<stdio.h>
void reverse(int[],int);
int main()
{
	int i,j,n;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	reverse(a,n);
	return 0;
}
void reverse(int x[],int n1)
{
	int i;
	for(i=n1-1;i>=0;i--)
	printf(" %d ",x[i]);
}
