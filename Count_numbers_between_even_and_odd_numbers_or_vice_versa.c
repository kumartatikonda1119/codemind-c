#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int c=0;
    for(int i=1;i<=a-2;i++)
    {
        if(arr[i-1]%2==0&&arr[i+1]%2!=0)
        
        {
            c++;
            
        }
        if(arr[i-1]%2!=0&&arr[i+1]%2==0)c++;
        
    }
    printf("%d",c);
}