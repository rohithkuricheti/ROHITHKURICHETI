#include<stdio.h>
int main()
{
	char name[10];
	int len;
	gets(name);
	len=strlen(name);
	printf("%d",len);
	return 0;
}
