#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main(){
	printf("***********************************************************************\n");
	int choice=0;
	struct node{
		int data;s
		struct node *next;
	};
	struct node *head,*newnode,*temp;
	head=NULL;
	while(choice==0){
	
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&(newnode->data));
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
		temp=head;
		printf("grr00");
	}
	else{
		temp->next=newnode;
		temp=newnode;
		printf("tt0");
	}
    printf("Enter 1 to exit or 0 continue ");
    scanf("%d",&choice);
    if(choice==1){
    	break;
	}
	}
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	return 0;
}
