#include<stdio.h>
int main()
{
    int i,a;
    scanf("%d",&a);
    int c[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&c[i]);
    }
    int d,e,f,k=0,l=0;
    scanf("%d",&d);
    
     for(i=0;i<a;i++)
     {
         if(c[i]==d)
         {
             e=i;
             
             k++;
             break;
         }
     }
     for(int j=a-1;j>=0;j--)
     {
         if(c[j]==d)
         {
             f=j;
             
             l++;
             break;
             
         }
         
     }
     if(k==0&&l==0)
     {
         printf("-1 -1");
     }else {
         printf("%d %d",e,f);
     }
     
    
    
}
