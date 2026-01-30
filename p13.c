#include<stdio.h>
#include<string.h>
int main(){
   char s[50];
   int i,p;
   while(1){
   scanf("%s",s);
   char s1;
   scanf(" %c",&s1);
   int y=strlen(s);
   for(i=0;i<y;i++)
{
    if(s[i]==s1){
      p=i;
    }
    
    }
    printf("%d",p);
    }
    return 0;
    }
