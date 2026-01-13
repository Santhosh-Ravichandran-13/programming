#include<stdio.h>
#include<string.h>
int main(){
   int i,s1=0,t;
  char s[10];
  scanf("%s",s);
  int d=strlen(s);
  for(i=0;i<d;i++){
  s1=s1+(s[i]-'0');
  }
  t=s1/d;
  printf("%d",t);
return 0;
}
