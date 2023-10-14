#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float c,d;
    d=x-y;
    c=(d/x)*100.00;
    printf("%.2f",c);
}