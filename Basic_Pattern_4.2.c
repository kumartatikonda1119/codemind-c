#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(i%2!=0)
            {
                printf("1 ");
            }else {
                printf("0 ");
            }
        }printf("
");
    }
}