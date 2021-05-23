#include<stdio.h>
void main()
{
	int a[3][3],i,j,sum;
	printf("Enter the matrix (3*3)\n");
	  for (i=0;i<3;i++)
	  for(j=0;j<3;j++)
	  {
	  	scanf("%d", &a[i][j]);
	  	if(i==j)
	  	sum=sum+a[i][j];
	  }
	printf(" matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(a+i)+j));
		}
		printf("\n");
	}
	printf("Sum of diagonal =%d",sum);
	
}
