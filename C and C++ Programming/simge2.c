#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<string.h>
#define MAX 6

int intArray[MAX];
int front=0;
int rear=-1;
int itemCount=0;
int peek(){
	return intArray[front];
}

bool isEmpty(){
	return itemCount==0;
}

bool isFull(){
	return itemCount==MAX;
}

int size (){
	return itemCount;
}

void insert(int data){
	if(!isFull()){
		if(rear==MAX-1){
			rear=-1;
		}
		intArray[++rear]=data;
		itemCount++;
	}
}

int removeData(){
	int data=intArray[front++];
	if(front==MAX){
		front=0;
	}
	itemCount--;
	return data;
}



int main(int argc, char *argv[]) {
	
	insert(3);
	insert(5);
	insert(9);
	insert(1);
	insert(12);
	insert(15);
	int num=removeData();
	printf("Element removed:%d\n",num);
	insert(16);
	insert(17);
	insert(18);
	printf("element at front:%d\n",peek());
	printf("Queue: ");
	while(!isEmpty()){
		int n=removeData();
		printf("%d\n",n);
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
