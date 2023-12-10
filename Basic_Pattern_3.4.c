#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("%c ",64+i);
        }printf("
");
    }
}