#include<stdio.h>
int fan_li(int r){
if(r==1){
printf("\nFan and Light in Room 1 is On:");
}
else if(r==2){
   printf("\nFan and Lig      ht in Room 1 & 2 is On:");
    }  
      else if(r==3){
   printf("\nFan and Light in Room 1 & 2 & 3 is On:");
    }  
    else if(r==4){
   printf("\nFan and Light in Room 1 & 2 &3 & 4 is On:");
    }  
    else{
    }
}
int fan_0(int r){
if(r==1){
 printf("\nFan  in Room 1 is On:");
    }
    else if(r==2){
    printf("\nFan  in Room 1& 2 is On:"); 
    }
    else if(r==3){
    printf("\nFan  in Room 1& 2 &3 is On:"); 
    }
    else if(r==4){
    printf("\nFan  in Room 1& 2 &3 & 4 is On:"); 
    }
    else{
    }
}
int smart_func(int p,int ldr){
int li=0,fan=0;
int r=0;
if(p==0){
printf("No Persons at all,No Need for the fan and light ");
}
else{
}
if(ldr==0){
    if(p>0 && p<=15){
    r=1;
    printf("\nPersons allocated in Room1 id:%d",p);
    fan_li(r);
    }
    else if((p>16 &&p<=30)){
    p=p-15;
    r=2;
    printf("\nPersons allocated in Room 1 is :15& Room2:%d",p);
    fan_li(r);
    }
    else if((p>30 &&p<=45)){
 
    p=p-30;
    r=3;
    printf("\nPersons allocated in Room 1:15 & Room 2 :15 & Room3:%d",p);
     fan_li(r);
    }
    else if((p>45 &&p<=60)){

    p=p-45;
    r=4;
    printf("\nPersons allocated in Room 1:15 & Room 2:15 & Room3 :15 &Room 4:%d",p);
    fan_li(r);
    }
    else{
    printf("No More Rooms in the hall");
    }
    }
    else{
    if(p>0 && p<=15 ){
    r=1;
    printf("\nPersons allocated in Room1 id:%d",p);
      fan_0(r);
    }
    else if((p>16 &&p<=30)){
    p=p-15;
    r=2;
    printf("\nPersons allocated in Room 1 is :15& Room2:%d",p);
     fan_0(r);
    }
    else if((p>30 &&p<=45)){
    p=p-30;
    r=3;
    printf("\nPersons allocated in Room 1:15 & Room 2 :15 & Room3:%d",p);
    fan_0(r);
    }
    else if((p>45 &&p<=60)){
    p=p-45;
    r=4;
    printf("\nPersons allocated in Room 1:15 & Room 2:15 & Room3 :15 &Room 4:%d",p);
     fan_0(r); 
    }
    else{
    printf("No More Rooms in the Hall");
    }
}
}
int main(){
 while(1){
   int person;
   printf("\nEnter the Persons:");
   scanf("%d",&person);
   int Ldr;
   printf("Enter the Ldr value:");
   scanf("%d",&Ldr);
   smart_func(person,Ldr);
   }
  return 0;
  }








