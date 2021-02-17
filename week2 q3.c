#include <stdio.h>
int main()
{
	char s[100];
	int count =0,i;
	printf("enter the string:\n");
	scanf("%[^\n]s" ,&s[i]);
	for (i=0;s[i] !='\0';i++)
	{
		if (s[i] == ' '&& s[i+1] != ' ')
		count++;
	}
	printf("number of words in given string are:%d\n", count + 1);
}
