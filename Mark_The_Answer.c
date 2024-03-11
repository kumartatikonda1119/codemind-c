#include<stdio.h>
int main()
{
    int a ,c,d=0,e=0,f;
    scanf("%d%d",&a,&c);
     
    
    int arr[a];
    
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        
    }
   
    for(int i=0;i<a;i++)
    {
        
       
         if(arr[i]>c)
        {
            e++;
            continue;
        }
        if(e==2)
        {
            break;
            
         }
         d++;
    }
    printf("%d",d);
    
}