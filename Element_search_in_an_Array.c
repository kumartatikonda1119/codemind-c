#include<stdio.h>
int  main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int a,b=0;
    scanf("%d",&a);
    for(int i=0;i<n;i++)
    {
        if(a==arr[i])
        {
            printf("True");
              b++;
            break;
          
            
            
        }
    }if(b==0)
    {
        printf("False");
    }
}