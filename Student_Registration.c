#include<stdio.h>
int main()
{
    int t,n1,m1,k1,n2,k2,m2;
    scanf("%d%d%d%d%d%d%d",&t,&n1,&m1,&k1,&n2,&m2,&k2);
    int b,c;
    b=m1-k1;
    c=m2-k2;
    if(n1<b){
        printf("YES");
    }else {
        printf("NO");
    }
    if(n2<c)
    {
        printf("
YES");
    }else {
        printf("
NO");
    }
}