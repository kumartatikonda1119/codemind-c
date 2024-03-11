#include<stdio.h>
int main()
{
    int a,b,e,d,f;
    scanf("%d",&a);
    int arr[a],c[1000]={0};
    
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
       
    }
    for(int i=0;i<a;i++)
    {
       if(arr[i]>0) c[arr[i]]++;
        
    }
    for(int i=1;i>0;i++)
    {
        if(c[i]==0)
        {
            printf("%d",i);
            break;
            
        }
    }
      
    
}