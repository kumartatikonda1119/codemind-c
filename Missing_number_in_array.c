#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        int c;
        scanf("%d",&c);
        int arr[c-1];
        for(int i=0;i<c-1;i++)
        {
            scanf("%d",&arr[i]);
        }
        int d[100]={0};
        for(int i=0;i<c-1;i++)
        {
            d[arr[i]]++;
            
            
        }
        for(int i=1;i>0;i++)
        {
            if(d[i]==0)
            {
                printf("%d
",i);
                break;
                
            }
        }
    }
}