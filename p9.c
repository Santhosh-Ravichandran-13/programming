#include<stdio.h>
int main(){

   FILE *f1;
   FILE *f2;
   FILE *f3;
   f1=fopen("ip.txt","r");
   f2=fopen("op.txt","w");
   f3=fopen("b.txt","r+");
   int a=1,n,t;
   fscanf(f1,"%d\n",&n);
   fscanf(f3,"%d\n",&t);
   //printf("%d",n);
   //printf("%d",t);
   while(a!=t+1){
   int s=a*n;
   fprintf(f2,"Multiplication of the table %d is:",n);
   fprintf(f2,"\n%d X %d=%d",n,a,s);
   //printf("\n%d x %d=%d",n,a,s);
   fprintf(f3,"Multiplication of the table %d is:",n);
   fprintf(f3,"\n%d X %d=%d",n,a,s);
   a++;
}
 fclose(f1);
 fclose(f2);
 fclose(f3);
}
