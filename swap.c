#include <stdio.h>
void Swap_1(int *x,int *y)
{
    int *temp=*x;
    *x=*y;
    *y=*temp;
}
void Swap_2(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void main()
{

}