#include<stdio.h>
int stack[10],Top=-1;
int push(),pop(),traversal();
//fucntion prototyping 

int main(){
int choice;
while(choice!=4){
	
printf("Enter 1-Push 2-Pop 3-Traversal 4-Exit");
scanf("%d",&choice);
switch(choice){
	case 1:{
		push();
		//function calling
		break;
	}
	case 2:{
		pop();
		break;
	}
	case 3:{
		traversal();
		
		break;
	}
	case 4:{
		break;
	}
	
}
}


return 0;
}
//function defining
int push(){
	int ele;
	printf("Enter element\n");
	scanf("%d",&ele);
	if(Top==10-1){
		printf("Overflow");
	}
	else{
		Top++;
		stack[Top]=ele;
	}
	return 0;
}

int pop(){
	if(Top==-1){
		printf("underflow\n");
	}else{
		Top--;
	}
	return 0;
}

int traversal(){
	int i;
	for(i=0;i<=Top;i++){
		printf("%d\n",stack[i]);
	}
	return 0;
}

