#include<stdio.h>
int main()
{
    int a,i,j,k,b;
    scanf("%d",&a);
    b=a;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }for(k=1;k<=b;k++)
        {
            printf("%d ",b);
        }b--;
        printf("
");
    }
}