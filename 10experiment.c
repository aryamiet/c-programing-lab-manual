#include<stdio.h>
void main()
{
    int a=10,b=20;
    void swap1(int,int);
    void swap(int*,int*);
    printf("before swapping");
    printf("A=%d\n B=%d\n",a,b);
    swap1(a,b);
    swap(&a,&b);
    printf("after swapping");
    printf("A=%d\n B=%d\n",a,b);
}
void swap1(int x,int y)
{
    int t=x;
    x=y;
    y=t;

}
void swap(int*x,int*y)
{
int t=*x;
*x=*y;
*y=t;
}
