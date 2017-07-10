#include <stdio.h>

#define MAX 6

int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

int peek(){
	return intArray[front];
}

int isEmpty(){
	if(itemCount == 0){
	return 1;
	}
	else{
	return 0;
	}
}

int isFull(){
	if(itemCount == MAX){
	return 1;
	}
	else{
		return 0;
	}
}

int size(){
	return itemCount;
}

void enqueue(int data){
	if(!isFull){
		if(rear == MAX-1){
		rear = -1;
		}
	}
	
	intArray[++rear] = data;
	itemCount++;
}

int dequeue(){
	int data = intArray[front++];
	if(front == MAX){
		front = 0;
	}
	itemCount--;
	return data;
}

int main(){
	enqueue(3);
	enqueue(4);
	enqueue(14);
	enqueue(1);

	int number = dequeue();
	printf("Removed: %d\n",number);
	
	int another_number = peek();

	printf("Front is: %d\n",another_number);
}

