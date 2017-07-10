#include <stdio.h>

struct Stack{
	int front = -1;
	int rear = 0;
	int max = 6;
	int count = 0;
	int array[6];
}

int isEmpty(){
	if(count == 0){
		return 1;
	}else{
		return 0;
	}
}

int isFull(){
	if(count == max){
		return 1;
	}else{
		return 0;
	}
}

void push(int data){
	if(isEmpty){
		array[0] = data;
	}else if(isFull){	
		printf("Stack is full\n");
	}else{
		int holder;
		for(int i = 0;i < count + 1; i++){
			if(i == 0){
				holder = array[i++];
				array[i++] = array[i];
			}else{
				array[i] = holder;
				holder = array[i++];
			}
				
			
		
	

	
