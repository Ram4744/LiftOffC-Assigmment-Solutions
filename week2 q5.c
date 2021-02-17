#include <stdio.h>
int main()
{
	int i,j,x,y;
	printf("enter x: ");
	scanf("%d" ,&x);
	y=x*2-1;
	for(i=1; i<=y; i++)
	{
		for (j=1; j<=y; j++)
		{
			if(j==1 || (j==y -i+1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
