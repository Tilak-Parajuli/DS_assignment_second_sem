//Write a program to find union, intersection, difference and symmetric difference of two sets
#include<stdio.h>
int main(){
	char setA[20],setB[20],setC[20],c;
	int m,n,i=0,j=0;

	//for set A (input)
	printf("Enter the total no of elements in set A \n");
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		printf("Enter %d element of set A:",i+1);
		scanf("%d",&setA[i]);
	}
	//for set B (input)
	printf("\nEnter the total no of elements in set B \n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter %d element of set B:",i+1);
		scanf("%d",&setB[i]);
	}

	//printing setA 
	printf("\nSet A = {");
	for(i=0;i<m;i++){
		printf("%d",setA[i]);
		if(i!=m-1)
		printf(",");
	}
	printf("}\n");

	//printing setB
	printf("Set B = {");
	for(i=0;i<n;i++){
		printf("%d",setB[i]);
		if(i!=n-1)
		printf(",");
	}
	printf("}\n");

	//1.Union
	int k=0;
	printf("\n");
	printf("1.The Union of the set A and B : { ");
	for(i=0;i<m;i++)
	{
		printf("%d ",setA[i]);
		if(i!=m-1);
	}
	while(j<n){
		int c=0;
		for(i=0;i<m;i++){
			if(setA[i]==setB[j]){
			c++;
			}
		}
		if(c==0){
			printf("%d ",setB[j]);
			}
			j++;
	}
	printf("}\n");

	//2.Intersection
	 	for(i=0; i<m; i++)
        {
        for(j=0; j<n; j++)
           {
            if (setA[i] == setB[j])
                {
                    setB[j]=0;
                    setC[c] = setA[i];
                    c++;
                }
            }
        }
        printf("\n2.The Intersectionof the setA and B = { ");
        for(i=0; i<c; i++)
        {
            printf("%d ",setC[i]);
				printf(",");
        }
        printf(" }\n");

	//3.Difference
		printf("\nThe difference of set A and set B = { ");
		for(i=0;i<m;i++){
			int c=0;
			for(j=0;j<n;j++){
				if(setA[i]==setB[j])
				c++;
			}
			if(c==0)
			printf("%d ",setA[i]);
		}
		printf("}\n");

	//4.Cartisian product
	printf("\n4.The cartessian product of Set A and B{");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("(%d,%d)",setA[i],setB[j]);
			if((i!=m-1)&&(i!=n-1)){
				printf(",");
			}
			}
		}
		printf("}\n");

}