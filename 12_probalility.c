
#include<stdio.h>
#include<math.h>
int main()
{
	float t,fav;
	printf("Normal probability \n");
	printf("Input Total number of cases:");
	scanf("%f", &t);
	printf("Input favourable number of cases:");
	scanf("%f",&fav);
	printf("\n Probability of success is %.2f",fav/t);
	printf("\n Probability of Failure is %.2f",1-(fav/t) );
	printf("\n\n\n");
	float a,b,c;
	printf("\n Probability of both events A and B:");
	scanf("%f",&a);
	printf("\n Probability of event B only:");
	scanf("%f",&b);
	printf("\n Probability of event c only:");
	scanf("%f",&c);
	printf("\n\n\n Conditional probability \n\n\n");
	printf("probability of A given B is: %.2f",a/b );
	printf("\n probability of B given A is: %.2f",a/c );
	return 0;
}
