#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],c;
    for( int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        
        if(arr[i]%2==0)
        {
           c=i; 
        }
    }printf("%d",c);
}