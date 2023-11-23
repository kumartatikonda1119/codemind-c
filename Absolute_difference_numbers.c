#include<stdio.h>
#include<stdio.h>
#include<math.h>


int main()
{
    int a,b,c,d,e;
    scanf("%d%d",&a,&b);
    c=pow(10,b);
    d=a%c;
    while(a!=0)
    {
        a/=10;
        if(a<c)
        {
            break;
            
        }
    }if(d>a)
    {
        printf("%d",d-a);
    }if(a>d)
    {
        printf("%d",a-d);
    }
    
}