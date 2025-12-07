#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,x,length;
	char st1[30],st2[30];
	printf("Enter a string:\n");
	gets(st1);
	for(i=0;st1[i]!='\0';i++)
	{
		length++;
	}
	x=length;
	for(i=0;i<length,x>0;i++)
	{
		st2[i]=st1[x];
		x--;
	}
	st2[length+1]='\0';
	printf("The reversed string is:");
	puts(st2);
	return 0;
}
