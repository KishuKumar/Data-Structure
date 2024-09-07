#include<stdio.h>
struct date input();
void display(struct date);
void sortbyyear(struct date *,int );
void sortbymonth(struct date *,int);
void sortbyday(struct date *,int);
struct date
{
    int day,month,year;
};

int main()
{
    int i,n;
    printf("Enter number of dates: \n");
    scanf("%d",&n);
    struct date d[n];
    printf("Enter date in dd/mm/yyyy form: ");
    for(i=0;i<n;i++)
    {
        printf("Enter %d date: \n",i+1);
        d[i]=input();
    }
    printf("Before soting the dates are: \n");
    for(i=0;i<n;i++)
    {
        display(d[i]);
    }
    sortbyyear(d,n);
    sortbymonth(d,n);
    sortbyday(d,n);
    printf("\nAfterr soting the dates are: \n");
    for(i=0;i<n;i++)
    {
        display(d[i]);
    }
}
struct date input()
{
    struct date d;
    scanf("%d",&d.day);
    scanf("%d",&d.month);
    scanf("%d",&d.year);
    return d;
}
void display(struct date d)
{
    printf("\n%d/%d/%d",d.day,d.month,d.year);
}
void sortbyyear(struct date *d,int size)
{
    int i,j;
    for(i=1;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(d[j].year>d[j+1].year)
            {
                struct date temp;
                temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }
        }
    }
}
void sortbymonth(struct date *d,int size)
{
    int i,j;
    for(i=1;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(d[j].year==d[j+1].year)
            {
            if(d[j].month>d[j+1].month)
            {
                struct date temp;
                temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }
            }
        }
    }
}
void sortbyday(struct date *d,int size)
{
    int i,j;
    for(i=1;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(d[j].year==d[j+1].year)
            {
                if(d[j].month==d[j+1].month)
                {
                      if(d[j].day>d[j+1].day)
                        {
                            struct date temp;
                            temp=d[j];
                            d[j]=d[j+1];
                            d[j+1]=temp;
                        }
                }
            }
        }
    }
}