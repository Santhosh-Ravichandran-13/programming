#include<stdio.h>
int add(int a,int b){
int sum=a+b;
return sum;
}
int sub(int a,int b){
int su=a-b;
return su;
}
int mul(int a,int b){
int m=a*b;
return m;
}
int divi(int a,int b){
int d=a/b;
return d;
}
int mod(int a,int b){
int mo=a%b;
return mo;
}
int main(){


FILE *f1;
FILE *f2;
f1=fopen("ip1.txt","r");
f2=fopen("opp1.txt","a");
int n1,n2,i;
char c;

fscanf(f1,"%d",&n1);
fscanf(f1,"%d",&n2);
fscanf(f1," %c",&c);

if(c=='+'){
fprintf(f2,"\nSum of the elements :%d",add(n1,n2));
}
else if(c=='-'){
fprintf(f2,"\nSub of the elements :%d",sub(n1,n2));
}
else if(c=='*'){
fprintf(f2,"\nMultiplication of the elements :%d",mul(n1,n2));
}
else if(c=='/'){
fprintf(f2,"\nDivision of the elements :%d",divi(n1,n2));
}
else if(c=='%'){
fprintf(f2,"\nModulus of the elements :%d",mod(n1,n2));
}
else{
fprintf(f2,"\nInvalid input ");
}


fclose(f1);
fclose(f2);

}






