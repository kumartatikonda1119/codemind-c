#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    for(i=65;i<=65+a-1;i++)
    {
        for(j=1;j<=a;j++)
        {
            printf("%c ",i);
        }printf("
");
    }
}