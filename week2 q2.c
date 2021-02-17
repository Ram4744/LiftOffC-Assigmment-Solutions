#include <stdio.h>
int main()
{
	int even,i,j,n,ar[100];
	even=0;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&ar[i]);
	}
	for (j=0;j<n;j++)
	{
		if (j%2==0 &&ar[j]%2==0)
		even=even+ar[j];
	}
	printf("total sum:%d",even);
}
