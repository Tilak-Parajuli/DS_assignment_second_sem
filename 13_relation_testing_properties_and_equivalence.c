#include<stdio.h>
#include<stdlib.h>
int main(){
 int s[20],r[20][2],i,j,k,n,m,f=0,g=0,x,y,z=99;
 
 printf("enter the no. of elements in a set:");
 scanf("%d",&n);
 printf("enter the elements of set:");
 for(i=1;i<=n;i++)
 scanf("%d",&s[i]);
 printf("enter the no. of relation set:");
 scanf("%d",&m);
 printf("enter the pairs of relation set:");
 for(i=1;i<=m;i++)
 scanf("%d%d",&r[i][1],&r[i][2]);
 printf("The entered relation is:");
 printf("{");
 for(i=1;i<=m;i++)
 printf("(%d,%d),",r[i][1],r[i][2]);
 printf("\b}");
 f=0;
 for(i=1;i<=m;i++){
  if(r[i][1]==r[i][2])
  f++;
 }
 if(f==n)
 printf("\nThe enter set relation is refelexive.");
 //to check either it is symmetric or not
 f=0;g=0;
 for(i=1;i<=m;i++){
  x=r[i][1];
  y=r[i][2];
  g++;
  for(j=1;j<=m;j++){
   if(x==r[j][2]&&y==r[j][1])
   f++;
  }
  if(f==0)
   goto d;
  f=0;
 }
 if(g==m)
 printf("\nThe relation is symmetric.");
 //to check either it is transitive or not
 d:
 f=0;g=0;
 for(i=1;i<=m;i++){
  for(j=1;j<=m;j++){
   for(k=1;k<=m;k++){
   x=r[i][1];
   y=r[i][2];
   if(y==r[j][1])
   z=r[j][2];
   if(x==r[k][1]&&z==r[k][2])
    f++;
 }}
 if(f==0)
 goto h;
 f=0;
}
 printf("\nThe relation is transitive.");
 h:
 	f=0;
 for(i=1;i<=m;i++){
  if(r[i][1]>=r[i][2]&&r[i][2]>=r[i][1])
  f++;
}
 if(f==n)
 printf("\n The relation is antisymmetric.");
}