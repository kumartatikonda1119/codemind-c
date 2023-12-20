#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        for(j=1;j<=a-i;j++)
        {
            printf(" ");
        }for(k=1;k<=i;k++)
        {
            printf("%c ",i+64);
        }printf("
");
        
    }
}