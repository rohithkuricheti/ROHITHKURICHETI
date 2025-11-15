#include<stdio.h>
int main()
{
	int a[3][3],i,j,r,c,sum=0;
	printf("enter rows and columns: ");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j)
			sum+=a[i][j];
		}
	}
	printf("trace of martixA is %d",sum);
	return 0;
}
