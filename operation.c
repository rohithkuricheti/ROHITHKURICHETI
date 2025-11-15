#include<stdio.h>
int main()
{
	char op;
	double first,second;
	printf("enter the operator(+,-,*,/)");
	scanf("%c",&op);
	printf("enter two numbers ");
	scanf("%lf%lf",&first,&second);
	switch(op){
	case '+':
		printf("%.1lf+%.1lf=%.1lf",first,second,first+second);
		break;
		case '-':
			printf("%.1lf-%.1lf=%.1lf",first,second,first-second);
			break;
		case '*':
		printf("%.1lf*%.1lf=%.1lf",first,second,first*second);
		break;
		case '/':
		printf("%.1lf/%.1lf=%.1lf",first,second,first/second);
		break;
		default:printf("lokesh");
	}
	return 0;
}
