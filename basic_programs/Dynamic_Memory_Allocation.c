// dynamic memory alloation:
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=5,i;
    //int a[5];  static memory allocation
    int *a=(int *)malloc(n* sizeof(int)); 
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
    {
    	printf("%d",*(a+i));
	}
	
}

