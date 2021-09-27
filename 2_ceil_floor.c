#include<stdio.h>
#include<math.h>
int main(){
	float value;
	printf("Enter a float value:");
	scanf("%f",&value);
	printf("Ceiling value of %f is %f\n",value,ceil(value));
	printf("Floor value of %f is %f\n",value,floor(value));	
	return 0;
}
