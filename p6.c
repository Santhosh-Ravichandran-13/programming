#include<stdio.h>
#include<string.h>
int main(){

char s[100]="asdsggfg$ygyhjgy";
int i=0;
while(s[i]!='\0'){
printf("%c",s[i]);
if(s[i]=='$'){
break;
}
i++;
}
return 0;

}
