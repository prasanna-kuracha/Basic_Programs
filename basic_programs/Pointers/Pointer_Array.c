//relation bet arrays and pointers
//array name itself acts as a pointer
// it points to first element of the array 
#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	printf("%d %d",a,a+1);//1000 1001 1002 1003 1004
	printf("\n %d %d",*a,*(a+1));
	//pointer arithmetic
	//a + 1--> a+1*4--? 1000 +4 --> 1004
}
