/*add distance using function*/
#include<stdio.h>
struct distance
{
    int km;
    int m;
};
void adddis(struct distance d1,struct distance d2);
int main()
{
    struct distance d1,d2;
    printf("enter the fist distance in km :- ");
    scanf("%d",&d1.km);
    printf("enter the first distance in m :- ");
    scanf("%d",&d1.m);
    printf("\n");
    printf("enter the second distnace in km :- ");
    scanf("%d",&d2.km);
    printf("enter the second distance in m :- ");
    scanf("%d",&d2.m);
    adddis(d1,d2);

}
void adddis(struct distance d1,struct distance d2)
{
    struct distance d3;
    d3.km=d1.km+d2.km;
    d3.m=d1.m+d2.m;
    d3.km=d3.km+d3.m/1000;
    d3.m=d3.m%1000;
    printf("\n Total distance %d Kilometer %d Meter",d3.km,d3.m);
}
