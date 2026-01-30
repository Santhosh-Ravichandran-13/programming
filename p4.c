#include<stdio.h>
int main(){
   int n,t=0,r;
   scanf("%d",&n);
   int n1=n;
   while(n1>0){
   r=n1%10;
   t=(t*10)+r;
   n1=n1/10;
}
if(n==t){
printf("Palindrome");
}
else{
printf("Not Palindrome");

}
return 0;
}
