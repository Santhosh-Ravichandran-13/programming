/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};
struct node*head=NULL;
void add_begin() {
	struct node *nn=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&nn->data);
	nn->next=NULL;

	if(head==NULL) {
		head=nn;
	}
	else {
		nn->next=head;
		head=nn;
	}
}


void add_end() {
	struct node *nn=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&nn->data);
	nn->next=NULL;

	if(head==NULL) {
		head=nn;
	}
	else {
		struct node *temp=head;

		while(temp->next!=NULL) {
			temp=temp->next;
		}
		temp->next=nn;
		nn->next=NULL;
	}
}

void add_pos(int p) {

	if(p<1) {
		printf("Enter valid position.");
		return;
	}
	else if(p==1) {
		add_begin();
		return ;
	} else {
		int i=0;
		struct node *nn=(struct node*)malloc(sizeof(struct node));
		struct node*temp=head;
		printf("Enter the data:");
		scanf("%d",&nn->data);
		nn->next=NULL;
		while(i<p-1 && temp!=NULL) {
			temp=temp->next;
			i++;
		}

		if(temp==NULL) {
			printf("Invalid position");
			free(nn);
		} else {
			nn->next=temp->next;
			temp->next=nn;
		}
	}
}

void add_mid() {
    int count() {
	struct node*temp=head;
	int c=0;
	int i=0;
	while(temp->next!=NULL) {
		c++;
		temp=temp->next;
	}

	int mid=c/2;
	return mid;
    }
	int mid;
	add_pos(mid);
	

	
}

void delete_begin() {
	struct node*temp=head;
	if(head==NULL) {
		printf("There is no element");
	}
	else if(head->next==NULL) {
head=NULL;
	}
	else {
		head=head->next;
		free(temp);
	}
}

void delete_end() {
	struct node*temp=head;
	struct node*prev=NULL;
	if(head==NULL) {
		printf("There is no element.");
	}
	else if(head->next==NULL) {
head=NULL;
	}
	else {
		while(temp->next!=NULL) {
			prev=temp;
			temp=temp->next;
		}
		prev->next=NULL;
		free(temp);
	}
}

void delete_pos(int p) {
	struct node*temp;
		struct node*prev=NULL;
	if(p<1) {
		printf("Invalid position");
	}
	else if(p==1) {
		delete_begin();
	}
	else {
		temp=head;
		int i=0;
		while(i<p-1 && temp!=NULL) {
		    prev=temp;
			temp=temp->next;
			i++;
		}
		if(temp==NULL) {
			printf("Invalid pos");
		}
		else {
		    
          prev->next=temp->next;
          free(temp);
		}
	}
}
void display(){
    struct node*temp=head;
    while(temp->next!=NULL) {
			printf("%d",temp->data);
			temp=temp->next;
		}
		
}
int main()
{
   printf("Singly Linked List\n:");
   printf("1)Add at begin\n");
   printf("2)Add at end\n");
   printf("3)Add at position\n");
   printf("4)Add at middle\n");
   printf("5)delete at begin\n");
   printf("6)delete at end\n");
   printf("7)delete at position\n");
   printf("8)delete at middle\n");
   printf("9)display elements:");
   
   int op;
   scanf("%d",&op);
   switch(op){
       case 1:add_begin();break;
       case 2:add_end();break;
       case 3:add_pos();break;
       case 4:add_mid();break;
       case 5:delete_begin();break;
       case 6:delete_pos();break;
       case 7:delete_end();break;
       case 8:display();break;
      case 9:exit(0);break;
      default :printf("Enter Valid Option:");
       
   }
	return 0;
}
