#include<stdio.h>
int main()
{
	int a[3][3],i,j,n;
	printf("enter order of elements ");
	scanf("%d",&n);
	printf("enter the elements in to array");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("lower triangular matrix\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if(i>=j)
		    printf("%d\t",a[i][j]);
			else
			printf("0\t");
		}
		printf("\n");
	}
	return 0;
}

