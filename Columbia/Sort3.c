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
	int pos = 0;
	int index;
	int max;
	int temp;
	for(int i = 0; i < n; i++){
		max = i;
		for(int x = max; x > -1; x--){
			if(array[x] < array[x - 1]){
				temp = array[x-1];
				array[x-1] = array[x];
				array[x] = temp;
			}
		}
	}
	printf("Here are your sorted numbers\n");
	for(int i = 0; i < n; i++){
		printf("%d\n",array[i]);
	}
	return 0;
}
	
