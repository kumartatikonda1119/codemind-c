#include<stdio.h>
int main()
{
    int a,i,j,k,l,b;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
            
        }
    }
    int c=0,d=0;

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            k=arr[i][j];
            if(k%2==0)
            {
                c=k+c;
            }else {
                d=k+d;
                
            }
        }
    }
    printf("%d %d",c,d);
    
    
}