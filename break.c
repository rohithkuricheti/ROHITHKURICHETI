#include<stdio.h>
int main()
{
	int i=1;
	while(i<=5){
		if(i==2){
			i++;
			continue;
		}
		else if(i==5){
			break;
		}
		printf("%d\n",i);
		i++;
	}
	return 0;
}
