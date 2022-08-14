#include<stdio.h>
#define MAX 10
int insertion();
int deletion();
int traveral();
int front=0,rear=2;
int arr[10]={1,2,3};
int a,val,i,deleted;
int main(){
	while(a!=4){//mistake here in puttin while loop
    printf("1-insertion 2-deletion 3-traversal 4-exit");
	scanf("%d",&a);
	//do not put while loop here
    switch(a){
		case 1:{
			insertion();
			break;
		}
		case 2:{
			deletion();
			break;
		}
		case 3:{
			traversal();
			break;
		}
		
	}
  }
return 0;
	
}
int insertion(){
	
	 printf("Enter the number which you to insert"); 
	     scanf("%d",&val);
	     if(rear==MAX-1){  //whether is queue is full
	 	   printf("queue is overflow");
	     }
	     else{
	 	    if(rear==-1 && front ==-1){ //whether is queue is empty
	 		   printf("queue is empty");
	 		   rear=0;
	 		   front=0;
	 		   arr[front]=val;
		    }
		    else{
		 	   rear=rear+1;
		 	   arr[rear]=val;
		       }
	         }  
	     int i;
	     for( i=0;i<=rear;i++){
	 	 printf("%d ",arr[i]);
	     }  
	return 0;
}
int deletion(){
		if(rear==-1 && front==-1){
		printf("queue is underflow"); //whether queue is empty
	}
	else{
	   if(front ==rear){      //whether is has only one element
		   deleted=arr[front];
		   front=-1;
		   rear=-1;
	  }
	  else{
	  	deleted=arr[front];
	  	front=front+1;
	  }
    }
    for( i=front;i<=rear;i++){
    	printf(" ");
	    printf("%d ",arr[i]);
	 }
	return 0;
}
int traversal(){
    for( i=front;i<=rear;i++){
    	printf(" ");
	    printf("%d ",arr[i]);
	 }
   return 0;
}
