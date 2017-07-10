#include <stdio.h>

int main(){
	int list[10] = {1,2,3,4,5,6,7,8,9,10};
	int n;
	int size = sizeof(list)/sizeof(int);
	printf("Please input a number\n");
	scanf("%d",&n);
 	int i = 0;
	for(;i < size; i++){
		if(n == list[i]){
			printf("The number is in the list\n");
			return 0;
		}
	}
	printf("The number isn't in the list\n");
	return 0;
}
	
