#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	printf("Please input a number\n");
	int n;
	scanf("%d",&n);
	int size = sizeof(array)/sizeof(int);
	i = 0;
	for(;i<size;i++){
		if(n == array[i]){
			printf("Your number,%d,is in the list\n",n);
			return 0;
		}
	}
	printf("Your number,%d ,isn't in the list\n",n);
	clock_t end = clock();
	double time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
	printf("The program took %f time to run\n", time_spent);
	return 0;
}
