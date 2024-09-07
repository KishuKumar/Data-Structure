//Swapping of two number using pointers//
#include<stdio.h>
void swap(int a,int b);
int main()
{
    int a,b;
    printf("A= ");
    scanf("%d",&a);
    printf("B= ");
    scanf("%d",&b);
    swap(a,b);

}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("After swapping value of \nA=%d\nb=%d ",x,y);
}