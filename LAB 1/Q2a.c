#include<stdio.h>
#include<math.h>
struct coordinate
{
    int x_co;
    int y_co;
};
int main()
{
    struct coordinate p1,p2;
    float dis;
    printf("Enter the co-ordinate of x1:-");
    scanf("%d",&p1.x_co);
    printf( "Enter the co-ordinate of y1:-");
    scanf("%d",&p1.y_co);
    printf("Enter the co-ordinate of x2:-");
    scanf("%d",&p2.x_co);
    printf("Enter the co-ordinate of y2:-");
    scanf("%d",&p2.y_co);
    dis=sqrt((p2.x_co-p1.x_co)*(p2.x_co-p1.x_co)+(p2.y_co-p1.y_co)*(p2.y_co-p1.y_co));
    printf("Distanve between Two co-ordinate is:- %f",dis);

}