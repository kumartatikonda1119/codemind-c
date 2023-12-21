#include<stdio.h>
int main()

{
    int a,j,i,k,l,c=0;
    
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<a;i++)
    {
        c=0;
        
        if(arr[i]%2!=0)
        {
            for(k=i+1;k<a;k++){
                l=arr[k];
            if(l%2==0)
            {
            c++;
                
            }
                
            }
            
            
        }
        if(l%2!=0)
            {
                break;
            }
    }
    printf("%d",c);
}