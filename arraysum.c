#include <stdio.h>
int main(void)
{
	int n,i,j,k,a[1000];
		scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(a[i]+a[j]==a[k])
					printf("%d %d %d",i,j,k);
			}
		}
	}
	return 0;
}
