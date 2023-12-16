#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
     s=s+arr[i]; 
        
        
    }printf("%.2f",s/(float)n);
    
}