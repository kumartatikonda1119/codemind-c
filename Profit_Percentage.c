#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float z,c;
    z=y-x;
    c=(z/x)*100;
    printf("%.2f",c);
}