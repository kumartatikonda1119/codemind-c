#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,c=1,k=0,m=0,o,b,p;
    scanf("%d",&n);
    o=n;
    while (n!=0)
    {
        a=n%10;
       k=k*10+a;
       
        n/=10;
        
        
    }
    while (k!=0)
    {
       b= k%10;
      p= pow(b,c);
       c++;
       m=m+p;
       k/=10;
       
        
        
    }
    
    
    if(o==m)
    {
        printf("True");
        
    }else {
        printf("False");
    }
}