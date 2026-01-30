#include<stdio.h>
int func(int a,int b,int s){
   int i,t;
   printf("%d,",a);
   printf("%d,",b);
   for(i=0;i<s-2;i++)
{
   t=a+b;
   printf("%d",t);
   a=b;
   b=t;
   if(i<s-3) {
  printf(",");
  }
}

}
int main(){

   int f,e,n;
   scanf("%d %d %d",&f,&e,&n);
   func(f,e,n);
   return 0;
}
