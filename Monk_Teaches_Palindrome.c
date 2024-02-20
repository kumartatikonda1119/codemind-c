#include<stdio.h>
#include<string.h>
void pali(char a[],int b,int j)
{
    char c[b],e[b];
    
    int ch=0,g=0;
  for(int i=b-1;i>ch;i--,ch++)
  {
    if(a[ch]!=a[i])
    {
    	ch=0;
    	break;
	}
      
  }
  if(ch!=0&&j==0)
         {
         	printf("YES EVEN
");
         	
		 }else if(ch!=0&&j==1)
		 {
		 	printf("YES ODD
");
		 }else {
		 	printf("NO
");
		 	
		 }
  
}
int main()
{
    int a;
    scanf("%d",&a);
   int j=0,b,k;
    char d[1000];
    for(int i=0;i<a;i++)
    {
        scanf("%s",&d);
          b=strlen(d);
         if(b%2==0)
         {
         	j=0;
		 }else {
		 	j=1;
		 }
          pali (d,b,j);
        
    }
}