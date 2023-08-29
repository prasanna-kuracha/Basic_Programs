//this is array through pointers
/*#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int *ptr=a;
	for(; ptr<=a+4;ptr++)
	{
		printf("%d ",*ptr);
	}
}
#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int *ptr=a+4;
	for(;ptr>=a;ptr--)
	{
		printf("%d ",*ptr);
	}
}
#include<stdio.h>
int main()
{
   int a[5]={10,20,30,40,50}
   printf("%d %d\n ",a,a+1);
   //address of 1st elememt and corresponding element
   //every integer occupies 4 bytes
   printf("%d %d\n",*a,*(a+1));
}
 #include<stdio.h>
 int main()
 {
 	  int a[5];
 	  int i;
 	  for(i=0;i<5;i++)
 	  {
 	  	scanf("%d",a+i);  here a+i=&a[i] both reads the adress of normal elements
	  }
	  for(i=0;i<5;i++)
 	  {
 	  	printf("%d\n",*(a+i));
	  } 
 }*/
 #include<stdio.h>
 int main()
 {
 	int a[5]={10,20,30,40,50};
 	int *p=a; //here 'a' means it directly stores the adress of first element i.e is 10; so, we dont need to give &,like *p=&a
 	p++;
 	p++;
 	printf("%d ",*p);
 }
