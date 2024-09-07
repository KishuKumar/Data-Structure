/*split*/
#include<stdio.h>
void split(int ,float);
int main()
{
 float num;
 printf("Enter a value to split in percentage: ");
 scanf("%f",&num);
 split(1,num);
}

void split(int i,float n)
{
 if(i>50)
 {
  return;
 } 
 else
 {
  printf("5*%d %% = %f \n",i,(n*i)/100);
 }
 split(i=i+1,n);
}