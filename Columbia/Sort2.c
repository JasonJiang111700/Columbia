#include <stdio.h>

int main(){
	int n;
	printf("How many numbers would you like to input?\n");
	scanf("%d",&n);
	int array[n];
	int array2[n];
	int x;
	for(int i = 0; i < n; i++){
	        printf("Please enter a number\n");
		scanf("%d",&x);
		array[i] = x;
	}
	int max;
	max = array[0];
	for(int x  = 0; x < n;x++){
		if(array[x] > max){
				max = array[x];
		}
	}
	int min;
	int index;
        for(int f = 0; f < n; f++){
		min = array[0];
		for(int x  = 0; x < n;x++){
			if(array[x] < min){
				min = array[x];
				index = x;
			}
		}
		array[index] = max + 1;
		array2[f] = min;
	}
	printf("Here are your sorted numbers\n");
	for(int i = 0; i < n; i++){
		printf("%d\n",array2[i]);
	}
	return 0;
}
		
