#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int roll_no;
    int marks;
    char address[50];
};
void displaydetails(struct student s[]);
int main()
{
    struct student s1[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf(" Enter Student Details %d:-\n",i+1);
        printf("enter the name of student:-");
        scanf("%s",&s1[i].name);
        printf("enter the roll_no:-");
        scanf("%d",&s1[i].roll_no);
        printf("enter the marks:-");
        scanf("%d",&s1[i].marks);
        printf("enter the address:-");
        scanf("%s",&s1[i].address);
    }
    displaydetails(s1);

    
    
    
    
}
void displaydetails(struct student s[])
{
    printf("\nName\t\tRoll_no\t\tMarks\t\tAddress\t\t\n");
    for(int i=0;i<5;i++)
    {
        printf("%s\t\t%d\t\t%d\t\t%s\n",s[i].name,s[i].roll_no,s[i].marks,s[i].address);
    }
    
}


