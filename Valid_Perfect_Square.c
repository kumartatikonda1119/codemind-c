#include<stdio.h>
int main()
{
    int n,a,i,j,b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        for(j=2;j<a;j++)
        {
            b=0;
        if(a==(j*j))
        {
            b++;
            break;
        }
        
        }
        if(b==1)
        {
            printf("True
");
        }if(b==0)
        {
            printf("False
");
        }
    }
}