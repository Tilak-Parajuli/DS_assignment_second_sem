#include<stdio.h>
//for a power n 
int power(int base,int exp){
    if(exp!=0){
        return(base*power(base,exp-1));
    }
    else
        return 1;
}
int main(){
    int base,exp,result;
    printf("Enter base number and power number :\n");
    scanf("%d%d",&base,&exp);
    result=power(base,exp);

    printf("%d^%d =%d\n\n",base,exp,result);
}