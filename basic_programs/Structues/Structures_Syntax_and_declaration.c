//this is one type
/*#include<stdio.h>
int main()
{
struct student
{
	int stuno;
	char stuname[20];
	float average;
} a={10,"sana",500.0};
printf("%d\n%s\n%f",a.stuno,a.stuname,a.average);
}
//this is another type
#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float tot;
};
int main()
{
struct student a={10,"amma",543.00};
printf("%d\n%s\n%f",a.rollno,a.name,a.tot);

}*/
#include<stdio.h>
struct student
{
  int rollno;
  char name[20];
  float per;
};
int main()
{
  struct student std={10,"sana",1000},std1={12,"paapu",999};
  printf("%d\n%s\n%f\n",std.rollno,std.name,std.per);
  printf("%d\n%s\n%f",std1.rollno,std1.name,std1.per);

}
	


