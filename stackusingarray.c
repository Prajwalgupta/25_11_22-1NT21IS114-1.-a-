#include<stdio.h>
#include<stdlib.h>

#define size 4

void pop();       //function to remove element from stack
void push();      //function to push element into stack
void display();   //function to display the function inside stack

int stack[size],top=-1;    //declaration

void main(){
int choice;

	while(1){
	printf("\tMenu\n");
	printf("-------------------------------\n");
	printf("1.PUSH\n2.POP\n3.Display\n4.Exit\n");    //Option to select the operation
	printf("Enter the choice:\n");                   
	scanf("%d",&choice);                             //to input the choice
	switch(choice){
		case 1:push();break;
		case 2:pop();break;
		case 3:display();break;
		case 4:printf("Exited\n");
		default:printf("Invalid choice!!!!\n");
 		}
	}
}

void push(){
	int value;
	if(top==(size-1)){                                  //condition to check if satck is full or not
		printf("Stack is already full\n");
	}
	else{
		printf("Enter the value to be push:");      
       		scanf("%d",&value);                          //taking value to be push  
		top++;                                       //increasing the top position for taking the input
		stack[top]=value;
		printf("Insertion is successfull\n");
	}
}

void pop(){
	if(top==-1){                                        //condition to check if stack is empty or not
		printf("Stack is empty\n");                  
	}
	else{
		printf("Deleted:%d",stack[top]);                  
		top--;                                      //operation to delete the element from stack
	}
}

void display(){
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
		printf("The stack elements are:\n");
		for(int i=top;i>=0;i--){                    //loop to display the element of stack
			printf("%d\n",stack[i]);
		}
	}	
}
