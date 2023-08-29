//call by value : the 'a' in both the main and modify functions has a same value but in different memory location            
/*#include<stdio.h>
void modify(int a) 
{
	a=a+1;
}
int main()
{
	int a=10;
	printf("Before modification : %d\n",a);
	modify(a);
	printf("After modification : %d\n",a);
}
//call by reference
#include<stdio.h>
void modify(int *a)
{
	*a=*a+1;
}
int main()
{
	int a=10;
	printf("before modification : %d\n",a);
	modify(&a);
	printf("after modification : %d\n",a);
}*/
//array as an function argument
//call ref
//sending an array to a function will always be call by reference
#include<stdio.h>
void modify(int *a)  //int a[] , a[] is the address of the element of array 
{
	a[0]=147;
}
int main()
{
	int a[5]={10,20,30,40,50};
	printf("Before modification :%d",a[0]);
	modify(a); // modity(a)--> call by reference , here 'a' is the address of the first element in the array
	printf("\n after modification : %d ",a[0]);
}
