#include <stdio.h>
int main()
{
	
int a[100] ,size,i,j,big,small;   	
printf("\n enter the size of the array: ");
scanf("%d", &size);
printf("\n\n enter the %d elements of the array:\n\n",size);
for (i=1;i<size; i++)
scanf("%d", &a[i]);
big=a[0];
for(i=1;i<size;i++)
{
	if(big<a[i])
	{
		big=a[i];
	}
}
printf("\n\n the largest element : %d",big);
small=a[0];
for(j=1;j<size;j++)
{
	if(small>a[j])
	{
		small=a[j];
	}
}
printf("\n\n the smallest element: %d", small);
return 0;
}
