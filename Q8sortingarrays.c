#include<stdio.h>
int sort(int);
int main()
{
	int i,n,j,y,max;
	printf("Enter size of array:\n");
 scanf("%d",&n);
 int a[n];
 printf("Enter array elements:\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(j=0;j<n;j++)
 {
 	 max=a[0];
 for(i=0;i<n;i++)
 {
 	if(a[i]>=max)
 	{
 	y=i;
 	max=a[i];
 	printf("%d",max);
 }
 a[y]=0;
}
 }
return 0;
}
