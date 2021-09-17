//Program to implement Boolean matrix operations join boolean product and boolean product. 
#include<stdio.h>
int main(){
	int a[8][8],b[8][8],c[8][8],n_rows,n_colm,i,j;
	printf("Enter the number of rows and columns :\n");
	scanf("%d%d",&n_rows,&n_colm);

	printf("Enter the elements of matrix A\n");
	for(i=0;i<n_rows;i++){
		for(j=0;j<n_colm;j++){
			printf(" a%d%d =",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("***********************************\n");
	printf("Enter the elements of matrix B\n");
	for(i=0;i<n_rows;i++){
		for(j=0;j<n_colm;j++){
			printf("b%d%d =",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("***********************************\n");
	printf("BOOLEAN JOIN OF MATRIX A AND B IS \n");
	for(i=0;i<n_rows;i++){
		for(j=0;j<n_colm;j++){
			c[i][j]=a[i][j] || b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	printf("***********************************\n");
	printf("BOOLEAN PRODUCT OF MATRIX A AND B IS \n");
	for(i=0;i<n_rows;i++){
		for(j=0;j<n_colm;j++){
			c[i][j]=a[i][j] && b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}

return (0);
}
