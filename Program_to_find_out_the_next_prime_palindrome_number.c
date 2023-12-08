#include<stdio.h>
int rev(int x)
{
    int y,c,d=0;
    y=x;
    while(x!=0)
    {
        c=x%10;
        d=d*10+c;
        x/=10;
        
    }if(y==d)
    {
        return d;
        
    }else {
        return 0;
        
    }
}
int main()
{
    int a,b,c,d,e=0,f,g,h,i,j;
    scanf("%d",&a);
    for(i=a+1;i>0;i++)
    {
        c=i;
         b=rev(c);
         if(b!=0)
         {
             e=0;
             d=b;
             for(j=2;j<d;j++)
             {
                 if(d%j==0)
                 {
                     e++;
                     break;
                 }
             }
             if(e==0)
        {
             printf("%d",d);
             break;
                      }
         }
		  
    }
        
    
}