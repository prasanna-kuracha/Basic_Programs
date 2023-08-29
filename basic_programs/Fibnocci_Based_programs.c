//fibonacci search

//#include<stdio.h>
//int main()
//{
//	int n,a=0,b=1,c,i;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		printf("%d ",a);    //0  1 2 3
//		c=a+b;    //0+1=1  2  3
//		a=b;
//		b=c;
//	}
//}

#include<stdio.h>
int main()
{
	int n,c,a,b,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;    
		a=b;
		b=c;
		if(a>n)
		{
			break;
		}
	 //printf("%d",a);
	}
	printf("%d ",a);	
}

//fibonacci with while loop
//#include<stdio.h>
//int main()
//{
//	int n,a=0,b=1;
//	scanf("%d",&n);
//	printf("%d %d ",a,b);
//	int c=a+b;
//	while(c<n)
//	{
//		printf("%d ",c);
//		a=b;
//		b=c;
//		c=a+b;
//	}
//	printf("\n%d ",c);
//}
