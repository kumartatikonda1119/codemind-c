#include<stdio.h>
int main()
{
    int a,b=1,c,d,e,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0){
                b++;
                break;}
                
            }
        }
    }printf("%d",b);
}