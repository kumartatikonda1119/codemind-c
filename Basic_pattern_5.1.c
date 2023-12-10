#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(j<=i)
            {
            printf("%d",i);}
            else {
                printf("*");
            }
        }printf("
");
    }
}