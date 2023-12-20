#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    int b=a;
    for(i=1;i<=a;i++)
    {
        for(k=1;k<=a-b;k++)
        {
            printf(" ");
        }
        for(j=1;j<=b;j++)
        {
            printf("%c ",64+i);
        }b--;
        printf("
");
    }
}