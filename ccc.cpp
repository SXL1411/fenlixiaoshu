#include <stdio.h>
void show()
{
    double number;
    int na;
    double nc;
    printf("输入一个实数:");
    scanf("%lf",&number);
    printf("一个实数:%0.2lf\n",number);
    na=number;
    nc=number-na;
    printf("%.2lf整数部分:%d ,小数部分:%.2lf\n",number,na,nc);
    
}


int main(int argc, const char * argv[])
{
    
    show();
    return 0;
}


