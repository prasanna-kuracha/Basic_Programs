#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int *p1,*p2;
	p1=&a;
	p2=&b;
	int s= *p1++;
	printf("%d  %d",p1,s);
}
