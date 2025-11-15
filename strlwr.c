#include<stdio.h>
int main()
{
	char name[10];
	gets(name);
	strlwr(name);
	puts(name);
	return 0;
}
