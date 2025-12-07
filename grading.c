#include<stdio.h>
int main()
{
	int p;
	printf("Enter your marks");
	scanf("%d",&p);
	if(p>=90)
	printf("A grade");
	elseif(p<90&&p>=80)
	printf("B grade");
	elseif(p<80&&p>=70)
	printf("C grade");
	elseif(p<70&&p>=60)
	printf("D grade");
	elseif(p<60&&p>=50)
	printf("E grade");
	else
	printf("FAIL");
}
