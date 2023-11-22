#include<stdio.h>
int main(){
    
    
    int n;
    scanf("%d",&n);
    float i,sum=0.0;
    for (i=1.0;i<=n;i++)
    {
        sum+=1.0/i;
    }
    printf("%.2f",sum);
}