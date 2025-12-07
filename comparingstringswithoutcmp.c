#include<stdio.h>
int main()
{
	int i,j,x,flag=0;
	char st1[40];
	char st2[30];
	printf("Enter 1st string:\n");
	gets(st1);
	printf("Enter 2nd string:\n");
	gets(st2);
	for(i=0;st1[i]!='\0'&&st2[i]!='\0';i++)
	{
			if(st1[i]!=st2[i])
			{
			 flag=1;
			 break;
			}
	}
    	if(flag==0)
	printf("Strings are equal\n");
	else if(flag==1)
	printf("Strings are unequal\n");
	return 0;
}
