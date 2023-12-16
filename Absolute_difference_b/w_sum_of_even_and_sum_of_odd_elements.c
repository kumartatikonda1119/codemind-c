#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int d=0,b=0,c;
    for(int i=0;i<a;i++)
    {
        if(arr[i]%2==0)
        {
            d=d+arr[i];
            
        }else {
            b=b+arr[i];
        }
    }if(d>b)
    {
     printf("%d",d-b);   
    }else if(b>d) {
        printf("%d",b-d);
    }else {
        printf("0");
    }
}