// Program to implement set operations
#include<stdio.h>
#include<stdlib.h>
int i,j=0;
int ints(int m,int n,int A[50],int B[50])
{
int c,C[50];
	 	for(i=0; i<m; i++)
        {
        for(j=0; j<n; j++)
           {
            if (A[i] == B[j])
                {
                    B[j]=0;
                    C[c] = A[i];
                    c++;
                }
            }
        }
        printf("\nA Intersection B = { ");
        for(i=0; i<c; i++)
        {
            printf("%d ",C[i]);
        }
        printf(" }");

}
int un(int m,int n,int A[50],int B[50])
{
	int k=0;
	printf("\n");
	printf("The Union of the set A and B : { ");
	for(i=0;i<m;i++)
	{
		printf("%d ",A[i]);
	}
	while(j<n)
	{
		int c=0;
		for(i=0;i<m;i++)
		{
			if(A[i]==B[j])
			{
			c++;
			}
		}
		if(c==0)
	{	printf("%d ",B[j]);}
		j++;
	}
	printf("}");
}
int diff(int m,int n,int A[50],int B[50])
{
	printf("\nThe difference of set A and set B = { ");
	for(i=0;i<m;i++)
	{
		int c=0;
		for(j=0;j<n;j++)
		{
			if(A[i]==B[j])
			c++;
		}
		if(c==0)
		printf("%d ",A[i]);
	}
	printf("}");
}
int cart(int m,int n,int A[50],int B[50])
{ int c;
	printf("\n Cartesian Product of set A and set B = { ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("(%d,%d)",A[i],B[j]);
			c++;
			
		if(c<m*n)
		printf(",");
		}
	}
	printf("}");
}
int main()
{
	char z;
	int A[50],B[50],m,n,i,j;
	int x;
	printf("\t\t SET OPERATION \t\t");
	printf("\nEnter the no. of elements of set A : ");
	scanf("%d",&m);
	printf("\n Enter the no.of elements of set B : ");
	scanf("%d",&n);
		printf("\nEnter the elements of set A : \n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\nEnter the elements of set B : \n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&B[j]);
	}
	printf("\nSet A : {");
	for(i=0;i<m;i++)
	{
		printf("%d",A[i]);
		if(i<m-1)
		printf(",");
	}
	printf("}\n");

	printf("\nSet B : {");
	for(j=0;j<n;j++)
	{
		printf("%d",B[j]);
		if(j<n-1)
		printf(",");
	}
	printf("}\n");
	do
	{
		printf("\n____________________________________________________________\n");
		printf("Enter 1 for Union. \n");
		printf("Enter 2 for Intersection. \n");
		printf("Enter 3 for Difference. \n");
		printf("Enter 4 for Cartesian Product, \n");
		printf("Enter 5 to exit, \n");
		
	scanf("%d",&x);
		switch(x)
		{
			case 1:
			{
					un(m,n,A,B);
				break;}
			case 2:
				{
				ints(m,n,A,B);
				break;
			}
			case 3:
			{
			diff(m,n,A,B);
			break;
			}
			case 4:
			{
					cart(m,n,A,B);
				break;
			}
			case 5:
			{
				exit(1);}
		}
		printf("\n\n\t\tDo You Wish to continue Y/N ?? " );
		scanf("%s",&z);
		}while(z=='Y'||z=='y');
	}
