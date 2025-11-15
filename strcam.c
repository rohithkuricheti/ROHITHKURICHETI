#include<stdio.h>
int main()
{
	char str1[10]={"abcdef"};
	char str2[10]={"abcde"};
	int res;
	res=strcmp(str1,str2);
	if(res==0)
	printf("both are equal");
	else if(res<0)
	printf("str1 is lower than str2");
	else
	printf("str1 is greater than str2");
	return 0;
}
