//program to implement ceiling and floor functions
#include<stdio.h>
#include<math.h>
int main(){

    float n;
    int x,y;

    printf("Enter any float number :\n");
    scanf("%f",&n);

    x=ceil(n);
    y=floor(n);

    printf("\n\n Float Number : %f\n",n);
    printf("Floor of the given number is %d\n",x);
    printf("Ceiling of the given number is %d\n",y);

    return 0;
}