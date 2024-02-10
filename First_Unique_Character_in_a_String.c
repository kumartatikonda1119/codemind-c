#include<stdio.h>
int main()
{
    char a[1000],c;
    int d=0,k=10,m,l=0;
    scanf("%s",a);
    for(int i=0;a[i]!=NULL;i++)
    {
        c=a[i];
        d=0;
        
        for(int j=0;a[j]!=NULL;j++)
        {
            if(a[j]==c&&j!=i)
            {
                d++;
                break;
                
                
            }
            
        }
        if(d==0)
        {
            printf("%d",i);
            l++;
            break;
            
        }
        
        
    }
    if(l==0)
    {
        printf("-1");
        
    }
}