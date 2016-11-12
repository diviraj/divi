#include <stdio.h>
int main(void)
{
	int c,i,k;
	int a=0,b=1;
	scanf("%d",&k);
	printf("%d %d ",a,b);
	for(i=0;i<m;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	
	return 0;
}
