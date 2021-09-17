//5.program to implement binary integer addition,multiplication and division
#include<stdio.h>
#include<math.h>
int binAddition(int a,int b){
	int carry; 
      while (b != 0) {
              carry = (a & b) << 1; 		//carry
            
              a=a^b; 		//sum
              b=carry;
      }
      return a;
}
int binMultiplication(int a,int b)
{
	int i,res=0;
	for(i=0;i<b;i++)
	{
		res=binAddition(res,a);
	}
	return res;
}
int binDivision(int a,int b)
{
	int i,res,count=0,twoscomp;
	if(a<b)
	{
		printf("Division of %d and %d is 0",a,b);
	}
	res==a;
	twoscomp=binAddition(~b,1);
	for(i=0;res>0;i++)
	{
		res=binAddition(res,twoscomp);
		if(res<=0)
		{
		if(res==0)
		count=binAddition(count,1);
		break;
			
		}
		else
		{
			count=binAddition(count,1);
		}
	}
	return count;
}
int main(){
	int a,b;
    printf("Enter first binary number :");
    scanf("%d",&a);
    printf("Enter second binary number :");
    scanf("%d",&b);
	printf("\n Binary Addition of %d and %d is %d\n",a,b,binAddition(a,b));
    printf("\n Binary Multplication of %d and %d is %d\n",a,b,binMultiplication(a,b));
    printf("\n Binary Division of %d and %d is %d\n",a,b,binDivision(a,b));
	return 0;
}
