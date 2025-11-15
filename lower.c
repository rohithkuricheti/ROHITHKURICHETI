#include<stdio.h>
int main()
{
	int a[10][10],i,j,n;
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter the into array ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("lower triangular matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>=j){
			printf("%d",a[i][j]);
			}
			else{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
