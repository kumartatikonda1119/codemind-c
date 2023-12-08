#include<stdio.h>
int main()
{
    int a,b=0,c,d,e=0,f=0,i,j,k=0,l=0;
    scanf("%d",&a);
    c=a;
    while(a!=0)
    {
        a/=10;
        k++;
    }
    for(i=2;i<c;i++)
    {
        if(c%i==0)
        
        {
            b++;
            break;
        }
		}
		if(b==0)
        {
        	l=0;
            while(c>0)
            {
                d=c%10;
                c/=10;
                e=0;
                if(d==1)
                {
                    l++;
                }
                for(j=2;j<d;j++)
                
                { 
                    if(d%j==0)
                    {
                        e++;
                        break;
                    }
                }if(e==0)
                {
                    f++;
                }
            }
        }
        
        
    
	
	
	if(f==k&&l==0)
    {
        printf("Mega Prime");
    }else {
        printf("Not Mega Prime");
    }
}