#include<stdio.h>
int main()
{
	int n;
	char c;  
	float f;
	double d;
	short int a;
	long long int k;
	printf("int : %d bytes\n %d bytes\n %d bytes\n %d bytes\n %d bytes\n %d bytes\n",sizeof(int),sizeof(c),sizeof(f),sizeof(d),sizeof(a),sizeof(k));
}
//here in sizeof() brackets we are giving either the data type name or variable ,both are same 
//like sizeof(n)==sizeof(int)
