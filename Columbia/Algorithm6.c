#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
	clock_t begin = clock();
	FILE *f;
	f = fopen("Random.txt","r");
	char line[5];
	int array[1000] = {0};
	int i = 0;
	while(fgets(line,5,f) != NULL){
		array[i] = atoi(line);
		i++;
	}
	int times = log(sizeof(array)/sizeof(int))/log(2);
	times ++;
	printf("Please input a number\n");
	int n;
	scanf("%d",&n);
	int high = sizeof(array)/sizeof(int);
	int low = 0;
	i = 0;
	for(;i < (times + 1); i ++){
		int mid = (high+low)/2;
		if(array[mid] == n){
			printf("Your number is in the list\n");
			return 0;
		}
		if(n > array[mid]){
			low = mid;
		}else{
			high = mid;
		}
	}
	printf("Your number isn't in the list\n");
	clock_t end = clock();
	double time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
	printf("The program took %f time to run\n", time_spent);
	return 0;
}
