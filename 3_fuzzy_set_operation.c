//3.program to impliment fuzzy set operation
#include<stdio.h>
#include<math.h>
float max(float n1,float n2){
	return(n1>n2)?n1:n2;
}
float min(float n1,float n2){
	return(n1>n2)?n2:n1;
}
int main(){
	float a[5]={0.3,0.3,0.4,0.6,0.8};
	float b[5]={0.4,0.1,0.5,0.2,0.5};
	int i;
	printf("\nGiven sets are : \n");
	printf("Set A : {");
	for(i=0;i<5;i++){
		printf(" %.2f",a[i]);
		if(i!=4)
		printf(",");
	}
	printf("}");

	printf("\nSet B : {");
	for(i=0;i<5;i++)
	{
		printf(" %.2f",b[i]);
		if(i!=4)
		printf(",");
	}
	printf("}");
	
	printf("\nThe Fuzzy union of set A and B = {");
	for(i=0;i<5;i++){
		printf(" %.2f",max(a[i],b[i]));
		if(i!=4)
		printf(",");
	}
	printf("}");
	
	printf("\nThe Fuzzy Intersection of set A and B = {");
	for(i=0;i<5;i++)
	{
		printf(" %.2f",min(a[i],b[i]));
		if(i!=4)
		printf(",");
	}
	printf("}");
	
	printf("\nThe Fuzzy complement of set A = {");
	for(i=0;i<5;i++)
	{
		printf(" %.2f",1-a[i]);
		if(i!=4)
		printf(",");
	}
	printf("}");
	
	printf("\nThe Fuzzy concatenation of set A={");
	for(i=0;i<5;i++){
	printf(" %.2f",pow(a[i],2));
	if(i!=4)
	printf(",");
}
printf("}");

printf("\nThe Fuzzy Dialation of Set B = {");
for(i=0;i<5;i++)
{
	printf(" %.2f",sqrt(b[i]));
	if(i!=4)
	printf(",");
}
printf("}");

printf("\nThe Fuzzy difference of A and B = {");
for(i=0;i<5;i++)
{
	printf(" %.2f",min(a[i],1-b[i]));
		if(i!=4)
	printf(",");
}
printf("}\n");
return 0;
}