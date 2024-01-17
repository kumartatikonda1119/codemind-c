#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,i,j;
    scanf("%d",&a);
    int arr[a];
    b=pow(2,a);
    for(i=0;i<b;i++){
        c=0;
        j=i;
        while(c!=a){
            arr[c]=j%2;
            j/=2;
            c++;
        }
        for(j=a-1;j>=0;j--){
            printf("%d",arr[j]);
        }
        printf("
");

        
    }
}