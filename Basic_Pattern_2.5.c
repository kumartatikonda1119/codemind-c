#include <stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=i;j<=a;j++)
        {
            printf("%c ",64+i);
        }printf("
");
    }
}