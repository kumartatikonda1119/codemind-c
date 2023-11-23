#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j=0,d,e,f;
    scanf("%d",&n);
    i=n*n;
    f=n;
    while(n!=0)
    {
        n/=10;
        j++;
        
    }
    d=pow(10,j);
    e=i%d;
    if(e==f)
    {
        printf("Automorphic Number");
    }else {
        printf("Not an Automorphic Number");
    }
    
    
}