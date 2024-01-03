#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
            
        }
    }
    int sum1=0,sum2=0;
    
    for(int i=0;i<a;i++)
    {
        sum1=0;
        
        for(int j=0;j<b;j++)
        {
            sum1=sum1+arr[i][j];
            
        }if(sum1>sum2)
        {
            sum2=sum1;
            
        }
    }
    printf("%d",sum2);
    
    
}