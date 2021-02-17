#include <stdio.h>
#include <stdio.h>
int main()
{
	int x,y,z;
	z=0;
	printf("enter any number:\n");
	scanf("%d",&x);
	while(x!=0);
	{
		y=x%10;
		z=z+y;
		x=x/y;
	}
	printf("total sum of digits are:%d",z);
}
