#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int roll_no;
    int marks;
    char address[50];
};
int main()
{
    struct student s[100];
    int i;
    for(i=0;i<5;i++)
    {
        printf("enter the name of student:-");
        scanf("%s",&s[i].name);
        printf("enter the roll_no-");
        scanf("%d",&s[i].roll_no);
        printf("enter the marks:-");
        scanf("%d",&s[i].marks);
        printf("enter the address:-");
        scanf("%s",&s[i].address);
       
    
    }
    
    printf("Student Details are:-\n");
    printf("Sl_no\t\tName\t\tRoll_no\t\tMarks\t\tAddress\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t\t%s\t\t%d\t\t%d\t\t\t%s\n",i+1,s[i].name,s[i].roll_no,s[i].marks,s[i].address);
    }
    
}