#include<stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }for(k=a-i;k>=1;k--)
        {
            printf("*");
        }printf("
");
    }
}