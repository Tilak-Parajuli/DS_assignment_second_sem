#include <stdio.h>
int euclideanAlgorithm(int a, int b) {
   if (a == 0)
      return b;
   return euclideanAlgorithm(b%a, a);
}
int EuclideanExtended(int a, int b, int* x, int* y) {
   if (a == 0) {
      *x = 0;
      *y = 1;
      return b;
   }
   int xtemp, ytemp; // To store results of recursive call
   int res = EuclideanExtended(b % a, a, &xtemp, &ytemp);
   *x = ytemp - (b / a) * xtemp;
   *y = xtemp;
   return res;
}
int main() {
   int x, y,a,b;
   printf("Enter two numbers : \n");
   scanf("%d%d",&a,&b);
   int res0 = euclideanAlgorithm(a, b);
   printf("EUcledian :\n GCD(%d, %d) =%d  \n\n",a,b,res0);
   int res1 = EuclideanExtended(a, b, &x, &y);
   printf("extended eucledian :\n gcd(%d, %d) = %d\n\n", a, b, res1);
}