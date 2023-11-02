#include<stdio.h>
int main()
{
    int h,m;
    scanf("%d%d",&h,&m);
    int c=(24-h)*60;
    int k=c-m;
    printf("%d",k);
}