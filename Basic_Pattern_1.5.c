#include<stdio.h>
int main()
{
	int i,j,k,l,a,o;
	scanf("%d",&a);
	o=a;
	for(i=0;i<1;i++)
	{
		for(j=65;j<=65+a-1;j++)
		{
			l=j;
			for(k=1;k<=o;k++)
			{
				printf("%c ",l);
			}printf("
");
		}
	}
	
}