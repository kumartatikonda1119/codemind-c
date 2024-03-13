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
    a=a+2;
    arr[a-2]=arr[0];
    arr[a-1]=arr[1];
    int c=0;
    for(int i=0;i<a-2;i++)
    {
        if(arr[i]%2==0&&arr[i+2]%2!=0)
        {
            c++;
            
        }if(arr[i]%2!=0&&arr[i+2]%2==0)c++;
        
    }
    printf("%d",c);
    
}