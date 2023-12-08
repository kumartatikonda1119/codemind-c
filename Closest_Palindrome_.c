#include<stdio.h>
int pali(int x)

{
    int y;
    y=x;
    int c,d=0;
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
    int n,a,b,c,d,e,f,i,j,k,l,o;
    scanf("%d",&n);
    o=n;
    for(i=1;i<n;i++)
    {
    	k=i;
        a=pali(k);
        if(a!=0){
		
        b=a;
		}
    }for(j=o+1;j>o;j++)
    {
    	l=j;
        c=pali(l);
        if(c!=0)
		{
        d=c;
        break;
		}
        
    }e=n-b;
    f=d-n;
    
    if(e==f)
    {
        printf("%d %d",b,d);
    }else if(e<f)
    {
        printf("%d",b);
    }else if(e>f)
    {
        printf("%d",d);
    }
}
