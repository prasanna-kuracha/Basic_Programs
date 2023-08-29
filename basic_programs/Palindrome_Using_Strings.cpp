#include<stdio.h>
#include<string.h>
int main()
{
	char n1[100],n2[100];
	scanf("%s",&n1);
	int i,j=0;
	int l=strlen(n1);
	for(i=l-1;i>=0;i--)
	{
		n2[j++]=n1[i];
	}
	if(strcmp(n1,n2)==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("not an palindrome");
	}
}
