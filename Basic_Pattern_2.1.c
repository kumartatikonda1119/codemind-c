#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=i;j>0;j--)
        {
            printf("* ");
        }printf("
");
    }
}