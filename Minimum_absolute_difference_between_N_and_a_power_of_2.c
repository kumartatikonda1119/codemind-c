#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,i,j;
    scanf("%d",&a);
    for(i=1;i>0;i++)
    {
       b= pow(2,i);
       if(b<=a)
       {
           c=b;
       }if(a<=b)
       {
           d=b;
           break;
       }
        
    }e=a-c;
    f=d-a;
    if(e<f)
    {
        printf("%d",e);
    }else 
    {
        printf("%d",f);
    }
}