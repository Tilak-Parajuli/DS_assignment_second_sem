//5.program to implement binary integer addition,multiplication and division
#include<stdio.h>
#include<math.h>
int add(int,int);
int mul(int,int);
int div(int,int);
int d2b(int a)
{
	int i,bin=0,rem,base=1;
	while(a!=0)
	{
		rem=a%2;
		bin=bin+rem*base;
		a=a/2;
		base=base*10;
	}	
	return bin;
}
int b2d(int a)
{
	
    int num, dec = 0, base = 1, rem;
	 num=a;
	 while(num>0)
	 {
	 	rem=num%10;
	 	dec=dec+rem*base;
	 	num=num/10;
	 	base=base*2;
	 }
	 return dec;
}
int main()
{
	int m,n,x,y;
	printf("Enter 2 binary numbers : \n");
	scanf("%d%d",&m,&n);
	x=b2d(m);
	y=b2d(n);
	int sum,product,division;
	sum=add(x,y);
	product=mul(x,y);
	division=div(x,y);
	printf("\nBinary addition : %d + %d = %d",m,n,d2b(sum));
	printf("\nBinary multiplication : %d x %d = %d",m,n,d2b(product));
	printf("\nBinary division : %d / %d = %d , remainder = %2d ",m,n,d2b(division),d2b(x%y));
	return 0;
}
int add(int a, int b)
{
	return a+b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}