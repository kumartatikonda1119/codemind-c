#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b,c,d,e,f=0,i,j;
    
    for(i=1;i<=a;i++)
    {
        f=0;
        scanf("%d%d%d%d",&b,&c,&d,&e);
        for(j=b;j>0;j--)
        {
            if(j%c==0&&j%d!=0||j%c!=0&&j%d==0)
            {
                f++;
            }
        }if(f>=e)
        {
            printf("Win
");
        }else {
            printf("Lose
");
        }
    }
}