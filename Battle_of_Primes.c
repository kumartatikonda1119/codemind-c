#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c,d=0,e,f,i,j,k;
    c=a+b;
    for(i=a+b+1;i>0;i++)
    {
        d=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                d++;
                break;
            }
            
            }
            if(d==0)
            {
                e=i;
                break;
                
            }
            
        }
    printf("%d",e-(a+b));
}