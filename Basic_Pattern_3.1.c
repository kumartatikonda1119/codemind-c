#include<stdio.h>
int main()
{
    int a,j,k,l,i;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }printf("
");
    }
}