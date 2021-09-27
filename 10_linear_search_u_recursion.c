#include<stdio.h>
void search(int a[],int low,int high,int key){
    if(a[low]==key)
        printf("%d found on %d index \n",key,low);
    else if(low==high)
        printf("Elements not found. \n");
    else
        search(a,low+1,high,key);
}
int main(){
    int a[50],i,key,size;
    printf("Enter the size of array :\n");
    scanf("%d",&size);
    printf("Enter the elements :\n");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("Enter key value to search for :");
    scanf("%d",&key);
    search(a,0,size,key);
}