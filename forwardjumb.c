#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%2==0)
	goto EVEN;
	else
	printf("%d is not even",a);
	EVEN:printf("%d is even",a);
	return 0;
}
