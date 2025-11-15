#include<stdio.h>
int main()
{
	int a,b,temp;
	a=84;
	b=39;
	printf("values before swaping-\n a=%d;b=%d\n\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("values after swaping-\n a=%d,b=%d\n\n",a,b);
	return 0;
}
