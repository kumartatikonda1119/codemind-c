#include<stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=65;j<=(65+a-1);j++)
        {
            printf("%c ",j);
        }printf("
");
    }
}