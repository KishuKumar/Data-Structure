/*find average marks of student*/
#include<stdio.h>
#include<string.h>
struct student
{
 char name[50];
 int roll_no;
 float marks[50];
 float total_marks;
 float average;

};
int main()
{
    struct student s;
    int i;
    printf("Enter the Student details :-\n ");
    printf("Enter the name :- ");
    scanf("%s",&s.name);
    printf("enter the roll no :- ");
    scanf("%d",&s.roll_no);
    printf("enter the marks of subject :-\n");
    for(i=0;i<5;i++)
    {
        printf("Marks of Subject %d :- ",i+1);
        scanf("%f",&s.marks[i]);
    }
    float average;
    for(i=0;i<5;i++)
    {
        s.total_marks=0;
        for(int j=0;j<5;j++)
        {
            s.total_marks=s.total_marks+s.marks[j];
        }
        average=s.total_marks/5;

    }
    printf("Student details are :- \n");
    printf("Sl_no\t\tName\t\tRoll_no\t\tMarks\t\tTotal_Marks\t\tAverage\n");
    printf("1\t\t%s\t\t%d\t\t",s.name,s.roll_no);
    for(i=0;i<5;i++)
    {
        printf("%f\n\t\t\t\t\t\t",s.marks[i]);
    }
    printf("\t\t%f\t\t%f\n",s.total_marks,average);
}