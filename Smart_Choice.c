#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int a=1500-2*x-4*(x+y);
    int b=1500-4*y-2*(x+y);
    if(a>b)
    {
        printf("%d",a);
        
    }else {
        printf("%d",b);
    }
}