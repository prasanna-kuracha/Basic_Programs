#include<stdio.h>
void pra(int a,int b)
{ 
    int i;
	for(i=a;i<b;i++)
	{
		printf("%d ",i);
	}
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	pra(a,b);
}
