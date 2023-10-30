/*编写c语言程序，计算一元二次方程a*x*x+b*x+c=0的实数根。
要求从键输入a,b,c的值，然后在输入解方程的结果*/
#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,d;
    printf("请输入方程的系数 a,b,c的值\n");
    scanf("%g,%g,%g",&a,&b,&c);
    printf("%g,%g,%g\n",a,b,c);
    d=sqrt(pow(b,2)-4*a*c);
    if(fabs(d)<0.01) 
        printf("方程唯一的跟是：%g\n",(-b)/(2*a));
    else if(d>0) 
        printf("方程两个跟是：%g,%g\n",(-b+d)/(2*a),(-b-d)/(2*a));
    else
        printf("方程无解!\n");
}


