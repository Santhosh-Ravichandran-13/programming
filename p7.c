#include<stdio.h>
int main(){
FILE *f1;
int i,n;
scanf("%d",&n);
f1=fopen("Multiplication.txt","w");
for(i=1;i<=10;i++){
int t=i*n;
fprintf(f1,"%d x %d=%d\n",i,n,t);

}

fclose(f1);


}
