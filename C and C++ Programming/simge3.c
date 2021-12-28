#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int item[SIZE];
int front=-1;
int rear=-1;
int isFull(){
	if((front==rear+1)||(front==0 && rear==SIZE-1)){
		return 1;
	}
	else{
		return 0;
	}
}
isEmpty(){
	if(front==-1){
		return 1;
	}
	else{
		return 0;
	}
}
void enQueue(int element){
	if(isFull()){
		printf("\nQueue is full\n");
	}
	else{
		if(front==-1){
			front=0;
		}
		rear=(rear+1)%SIZE;
		item[rear]=element;
		printf("\nInserted %d",element);
	}
}

int deQueue(){
	int element;
	if(isEmpty()){
		printf("\nQueue is empty\n");
	}
	else{
		element=item[front];
		if(front==rear){
			front=-1;
			rear=-1;
		}
		else{
			front=(front+1)%SIZE;
		}
		printf("\n Deleted element %d\n",element);
		return (element);
	}
}

void display(){
	int i;
	if(isEmpty()){
		printf("\n Empty Queue\n");
		}
		else{
		
		printf("\nItems: ");
		for(i=front;i!=rear;i=(i+1)%SIZE){
			printf("%d",item[i]);
		}
		printf("%d",item[i]);
		printf("\n Rear:%d\n",rear);
		}
		
	}



int main(int argc, char *argv[]) {
	//deQueue();
	enQueue(1);
	enQueue(2);
	enQueue(3);
	enQueue(4);
	enQueue(5);
	enQueue(6);
	display();
	deQueue();
	display();
	enQueue(7);
	display();
	enQueue(8);
	deQueue();
	display();
	enQueue(8);
	display();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
