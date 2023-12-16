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
        
        
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==int(s/n))
        {
            printf("True");
            c++;
            break;
        }
    }if(c==0)
    {
        printf("False");
    }
    
}