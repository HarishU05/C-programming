#include<stdio.h>
void main(){
struct student{
char name[10];
int rollno;
int mark;
};
typedef struct student stu;
stu s1;
printf("enter name");
scanf("%s",&s1.name);
printf("enter roll  no:");
scanf("%d",&s1.rollno);
printf("name:%s",s1.name);
}
