#include<stdio.h>
int main(){
int n,s=0,a=0,l;
scanf("%d",&n);
 while(n>0){
       l=n%10;
       s=s+l;
       n=n/10;
       a++;
   }
printf("%d",s/a);
}
