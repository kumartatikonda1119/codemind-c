#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    if(a>2){
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    for(i=a-1;i>0;i--)
    {
    for(j=1;j<=i;j++)
    {
        printf("*");
    }
        printf("
");
    }}
    else {
        printf("The pattern is not possible");
    }
}