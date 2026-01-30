#include<stdio.h>
#include<string.h>
int main(){
   int r=0;
   char s1[100],s[r];
   scanf("%s",s1);
   int d=strlen(s1);
   int i;
   for(i=0;i<d;i++){
    if(s1[i]=='$'){
         break; 
}else{
   for(i=0;i<d;i++){
    s[r]=s1[i];
    r++;
   }

}
}
 for(i=0;i<r;i++){
   printf("%c",s[i]);
   }

return 0;
}
