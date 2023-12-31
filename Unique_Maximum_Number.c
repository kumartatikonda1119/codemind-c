#include<stdio.h>
int main()
{
    int a,e=0,f=0,j;
    scanf("%d",&a);
    int b[a],c[1000]={0};
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
        
    }for(int i=0;i<a;i++)
    {
        c[b[i]]++;
    }
    for( j=1;j<1000;j++)
    {
        if(c[j]==1)
        {
            if(j>f)
            {
                f=j;
                e++;
                
            }
            
        }
    }
    
    if(e==0)
    {
        printf("-1");
}else {
    printf("%d",f);
}
}