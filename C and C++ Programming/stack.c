#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 3
struct stack {
	int s[size];
	int top;
}st; //st.s[0]  s[1] s[2] st.top
int isfull() {
	if(st.top>=size-1)
	return 1;
	else
	return 0; 
}
	void push(int item){
		st.top++;
		st.s[st.top]=item;
	}
	int isempty() {
		if(st.top==-1)
		return 1;
		else 
		return 0;
	}
	int pop() {
		int item;
		item=st.s[st.top];
		st.top--;
		return (item);
	}
	void display() {
		int i;
		if(isempty())
		printf("\n stack is empty !");
		else{
			for(i=st.top;i>=0;i--){
			printf("\n %d",st.s[i]);
		}
		}
	}
	int main() {
		int item,choice;
		char ans;
		st.top=-1;
		printf("\n\t implementation of stack");
		do {
			system("cls");
			printf("\n main menu");
		printf("\n 1.push \n 2.pop \n 3.display \n 4.exit");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("\n Enter the item to be push:");
			scanf("%d",&item);
			if(isfull())
			printf("\n stack is full");
			else 
			push(item);
			break;
			case 2: if(isempty())
			printf("\n Empty stack! Underflow!!");
			else {
				item=pop();
			printf("The popped element is %d",item);
		}
		break;
		case 3:
			display();
			break;
			case 4:
				exit(0);
		}
		printf("\n Do you want to continue? \t (Y/N)");
		ans=getch();
		}
		while(ans=='Y'|| ans=='y');
		return 0;
	}
	
	
	

