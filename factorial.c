#include<stdio.h>
int main()
{
	int n,i,f;
	printf("enter an positive integer");
	scanf("%d",&n);
	if(n<0){
		printf("for an negative value factorial doesn't exists");
	}
	else{
		for(i=1;i<=n;i++){
			f*=i;
		}
		printf("factorial of %d is= %d",n,f);
	}
	return 0;
}
