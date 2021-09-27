#include<stdio.h>
int exponentMod(int b,int n,int m){
    if (b==0)
        return 0;
    if (n==0)
        return 1;
    
    long y;
    if (n%2==0){ ///for even 
        y=b%m;
        y=(y*exponentMod(b,n-1,m)%m)%m;
    }
    return (int)((y+m)%m);
}
int main(){
    int b,n,m;
    printf("Enter the value of b,n ,m respectively :\n");
    scanf("%d%d%d",&b,&n,&m);
    printf("Result =%d\n",exponentMod(b,n,m));
    return 0;
}