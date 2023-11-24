#include<stdio.h>
int main()
{
    int i,j,a,b,c,d=1,e;
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++)
    {
        e=i;
        d=1;
        while(e>0)
        {
            c=e%10;
            if(c==0||i%c!=0)
            {
                d=0;
                break;
                
                
            }else {
                e/=10;
            }
            
        }if(d==1)
        {
            printf("%d ",i);
        }
        
    }
}