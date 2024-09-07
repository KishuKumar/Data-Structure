#include<stdio.h>
#include<math.h>
struct triangle
{
    int x_co;
    int y_co;
    
};
int main()
{
    struct triangle p1,p2,p3;
    int dis_A,dis_B,dis_C;
    printf("Enter the Co-ordinates Vertices of A:-\n");
    printf("enter the co-ordinate x1:- ");
    scanf("%d",&p1.x_co);
    printf("enter the co-ordinate of y1:- ");
    scanf("%d",&p1.y_co);
    printf("Enter the co-ordinates vertices of B:-\n");
    printf("enter the co-ordinate of x2:- ");
    scanf("%d",&p2.x_co);
    printf("enter the co-ordinate of y2:- ");
    scanf("%d",&p2.y_co);
    printf("enter the co-ordinate vertices of C:-\n");
    printf("enter the co-ordinate of x3:- ");
    scanf("%d",&p3.x_co);
    printf("enter the co-ordinate of y3:- ");
    scanf("%d",&p3.y_co);
    dis_A=sqrt((p2.x_co-p1.x_co)*(p2.x_co-p1.x_co)+(p2.y_co-p1.y_co)*(p2.y_co-p1.y_co));
    dis_B=sqrt((p3.x_co-p2.x_co)*(p3.x_co-p2.x_co)+(p3.y_co-p2.y_co)*(p3.y_co-p2.y_co));
    dis_C=sqrt((p3.x_co-p1.x_co)*(p3.x_co-p1.x_co)+(p3.y_co-p1.y_co)*(p3.y_co-p1.y_co));
    float s;
    s=(dis_A+dis_B+dis_C)/3;
    float area;
    area=sqrt(s*(s-dis_A)*(s-dis_B)*(s-dis_C));
    printf("Area of Triangle of co-ordinates of three vertices are :- %f",area);


}