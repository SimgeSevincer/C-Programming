#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define size 3

	
	struct stack{
		int s[size];
		int top;
		
	}st;
	
	int isfull(){
		if(st.top>=size-1){
			return 1;
		}
		else
		{
		  return 0;
		}
	}
	
	void push (int item){
		st.top++;
		st.s[st.top]=item;
	}
	
	int isempty(){
		if(isempty==-1){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	int pop(){
		int item;
		item=st.s[st.top];
		st.top--;
		return (item);
	}
	
	void display(){
		int i;
		if(isempty()){
			printf("\n stack is empty!");
		}
		else{
			for(i=st.top;i>0;i--){
				printf("\n%d",st.s[i]);
			}
		}
	}//display
	
	
	int main(){
		int item,choice;
		char ans;
		st.top=-1;
		printf("\n\tImplementation of stack");
		
		do{
			system("cls");//ekraný temizle.
			printf("\nMain Menu");
			printf("\n1:push\n2:pop\n3:display\n4:exit");
			printf("enter your choice.");
			scanf("%d",&choice);
			
			
			switch(choice){
				case 1:
					printf("\nenter the item to be push: ");
					scanf("%d",&item);
					if(isfull()){
						printf("\n stack is full");
					}
					else{
						push(item);
					}
					break;
					
				case 2:
					if(isempty()){
						printf("\nstack is empty! underflow!!");
						
					}
					else{
						item=pop();
						printf("\n the popped element is %d",item);
					}
					
					break;
					
				case 3:
					display();
					break;
					
				case 4:
					exit(0);
				
				
					
			}//switch
			
			printf("\n do you want to continue? yes or no?");
			ans=getch();
			
			
			
		}//do
		
		while(ans=='Y'||ans=='y');
		
		
		
		return 0;
		
		
	}//main
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	

