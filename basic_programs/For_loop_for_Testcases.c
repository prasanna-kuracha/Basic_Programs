#include<Stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d",a+b);
	}
}
