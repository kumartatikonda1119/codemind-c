#include<stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
            
        }
        for(k=i;k<=a;k++)
        {
            printf("%d ",i);
            
        }
        
        printf("
");
    }
}