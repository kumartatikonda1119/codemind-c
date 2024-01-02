#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],c[1000]={0};
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<a;i++)
    {
        c[arr[i]]++;
        
    }
    int sum=0,d=0;
    
    for(int j=1;j<=a;j++)
    {
        if(c[j]==j)
        {
            sum+=j;
            d++;
            
            
        }
    }
    if(d==0)
    {
        printf("-1");
    }else {
        printf("%.2f",(float)sum/(float)d);
        
    }
}