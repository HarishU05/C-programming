#include<stdio.h>
int main()
{
    struct student{
        char name[20];
        int rollno;
        int mark;
    };

    struct student s1;
    printf("Enter Name,rollno and marks: ");
    scanf("%s %d %d",&s1.name,&s1.rollno,&s1.mark);

    printf("\nName: %s",s1.name);
    printf("\nRoll number: %d",s1.rollno);
    printf("\nMark scored: %d",s1.mark);

    return 0;

}
