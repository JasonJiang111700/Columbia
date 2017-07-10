#include <stdio.h>

int main(){
	int n;
	printf("How many numbers would you like to input?\n");
	scanf("%d",&n);
	int array[n];
	int x;
	for(int i = 0; i < n; i++){
	        printf("Please enter a number\n");
		scanf("%d",&x);
		array[i] = x;
	}
	int index = 0;
	int size = sizeof(array)/sizeof(int);
	int temp;
	int i = 0;
	for(;i < size; i++){
		for(int x = 0; x < size -1;x++){
			if(array[x] > array[x+1]){
				temp = array[x+1];
				array[x+1] = array[x];
				array[x] = temp;
			}
		}
	}
	printf("Here are your sorted numbers\n");
	for(int i = 0; i < size; i++){
		printf("%d\n",array[i]);
	}
	return 0;
}
