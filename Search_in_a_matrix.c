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
    int c,d=0;
    scanf("%d",&c);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(c==arr[i][j])
            {
                d++;
                
            }
        }
    }
    
    printf("%d",d);
    
    
}