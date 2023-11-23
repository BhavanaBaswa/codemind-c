#include<stdio.h>
int main()
{
    double first,second,temp;
    scanf("%lf%lf",&first,&second);
    temp=first;
    first=second;
    second=temp;
    printf("%.lf
",first);
    printf("%.lf
",second);
}