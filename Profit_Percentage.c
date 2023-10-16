#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float z,d;
    d=y-x;
    z = (d/x)*100.0;
    printf("%.2f",z);
}