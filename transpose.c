#include<stdio.h>
int main()
{
	int a[2][2],t[2][2],r,c,i,j;
	printf("enter rows and columns of matrix a");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			t[i][j]=a[j][i];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}
