#include<stdio.h>
int main(){
int r=0,i,j,c=0;
   int n,t,p[r];
   scanf("%d",&n);
   while(n>0){
   t=n%10;
   p[r]=t;
   r++;
   n=n/10;
}
  for(i=0;i<=r;i++)
{
    for(j=r;j>0;j--)
{
    if(p[i]==p[j]){
    c++;
}
else{
 
}
}
}
if(c==r){
  printf("Palindrome");
}
else{
  printf("Not Palindrome");
}
return 0;
}
