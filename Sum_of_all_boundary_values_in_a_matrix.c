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
    }int s=0;
    
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(i==0)
            {
               s=s+arr[i][j]; 
            }else if(i==a-1)
            {
                s=s+arr[i][j];
            }else if(j==0)
            {
                s=s+arr[i][j];
            }else if(j==b-1)
            {
                s=s+arr[i][j];
            }
        }
    }
    printf("%d",s);
    
}