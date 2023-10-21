#include<stdio.h>
int main()
{
    int n,y;
    scanf("%d",&n);
    y=n/4;
    if(n<=4)
    {
        printf("1");
    }else {
        if(n%4==0)
        printf("%d",y);
        else {
            y=n/4;
            printf("%d",++y);
        }
    }
}