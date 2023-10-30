/*编写C语言函数，求解两个整数中的较大数*/
#include <stdio.h>
int max(int a,int b)
{
    return (a>b)?a:b;
}
void main(void)
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a, &b);
    printf("%d与%d中较大的数是%d\n",a,b,max(a,b));
    printf("\n");
}