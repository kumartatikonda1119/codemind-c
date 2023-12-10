#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=(a+1)-i;j++)
        {
            printf("%d ",j);
        }printf("
");
    }
}