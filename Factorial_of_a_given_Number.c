#include<stdio.h>
int main()
{
    int a,i=1;
    scanf("%d",&a);
    while (a>0)
    {
        i=i*a;
        a--;
        
    }printf("%d",i);
}