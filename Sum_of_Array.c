#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
     int arr[a];
     for( int i=0;i<a;i++)
     {
         scanf("%d",&arr[i]);
     }int s=0;
     
     for(int j=0;j<a;j++)
     {
         s=s+arr[j];
     }printf("%d",s);
}