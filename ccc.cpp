#include <stdio.h>
void show()
{
    double number;
    int na;
    double nc;
    printf("����һ��ʵ��:");
    scanf("%lf",&number);
    printf("һ��ʵ��:%0.2lf\n",number);
    na=number;
    nc=number-na;
    printf("%.2lf��������:%d ,С������:%.2lf\n",number,na,nc);
    
}


int main(int argc, const char * argv[])
{
    
    show();
    return 0;
}


