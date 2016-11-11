#include <stdio.h>
int main()
{
    char c[100],c=0,c1=0,c2=0;
    printf("Enter the string: ");
    scanf("%s",&c);
    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        c++;
    else if(c>=0&&c<=9)
   		c1++;
   	else
   		c2++;
	printf("%d%d%d",c,c1,c2);
    return 0;
}
