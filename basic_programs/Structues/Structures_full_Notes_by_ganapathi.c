                                                     structures
 
structure:
nothing but collection of different datatypes.
declaration:
struct student 

#include<stdio.h>
int main()
{
struct student
{
  int rollno;
  char name[20];
  float per;
}std={1,"aditya",98};
printf("%d\n%s\n%f",std.rollno,std.name,std.per);
}



#include<stdio.h>
struct student
{
  int rollno;
  char name[20];
  float per;
};
int main()
{
  struct student std,std1;
  scanf("%d%s%f",&std.rollno,&std.name,&std.per);
  scanf("%d%s%f",&std1.rollno,&std1.name,&std1.per);
  printf("%d\n%s\n%f",std.rollno,std.name,std.per);
  printf("%d\n%s\n%f",std1.rollno,std1.name,std1.per);

}


#include<stdio.h>
struct student
{
  int rollno;
  char name[20];
  float per;
};
int main()
{
   struct student std[10];
   int n,i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d%s%f",&std[i].rollno,&std[i].name,&std[i].per);
   }
   for(i=0;i<n;i++)
   {
     printf("%d %s %f\n",std[i].rollno,std[i].name,std[i].per);
   }
}
      

#include<stdio.h>
struct student
{
  int rollno;
  char name[20];
  float per;
};
int main()
{
   struct student std,*ptr;
   ptr=&std;
   scanf("%d%s%f",&ptr->rollno,&ptr->name,&ptr->per);
   printf("%d %s %f",ptr->rollno,ptr->name,ptr->per);//here we cannot give * symbol to ptr in printf ,if we give *symbol it displays error.
}



#include<stdio.h>
struct DOB
{
  int day;
  int month;
  int year;
};
struct student
{
  int rollno;
  char name[20];
  struct DOB date;
};
int main()
{
   struct student std;
   scanf("%d",&std.rollno);
   scanf("%s",&std.name);
   scanf("%d%d%d",&std.date.day,&std.date.month,&std.date.year);
   printf("%d\n%s\n%d-%d-%d",std.rollno,std.name,std.date.day,std.date.month,std.date.year);
}

union concept:
#include<stdio.h>
union student
{
  int rollno;
  char name[20];
};
int main()
{
  union student std;
  scanf("%d%s",&std.rollno,std.name);
  printf("%s",std.name);
}

#include<stdio.h>
int main()
{
   typedof int i;
   i a=10;
   printf("%d",a);
}

      recursion:

    calling funtion called itself.
structure:
#include<stdio.h>
void display();//function declaration
int main()
{
    display();//function call
}
void display()//function defination
{
    printf("hai acet students");
    display();
}
   
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int res=fact(n);
	printf("%d",res);
}
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}


