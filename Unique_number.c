#include<stdio.h>
int main()
{
    int a,b,c,d,e,f=0,g;
    scanf("%d",&a);
    b=a;
    c=a;
    while(b!=0)
    {
        d=b%10;
        b/=10;
        c=a;
        f=0;
        
        
        while(c!=0)
        {
            
            e=c%10;
            c/=10;
            if(e==d)
            {
                f++;
                if(f>=2)
                {
                    break;
                }
            }
        }if(f>=2)
        {
            break;
        }
    }if(f>=2)
    {
        printf("Not Unique Number");
    }else {
        printf("Unique Number");
    }
}