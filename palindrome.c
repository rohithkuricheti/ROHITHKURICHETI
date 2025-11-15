#include<stdio.h>
int main()
{
	int n,t,rev,r;
	printf("enter an integer ");
	scanf("%d",&n);
	t=n;
	while(n!=0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(t==rev)
		printf("%d is palindrome number",t);
	else
	printf("%d is not palindrome number",t);
	return 0;
}
