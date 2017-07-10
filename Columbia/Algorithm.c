#include <stdio.h>

int main(){
	int list[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("Please input a number\n");
	int n;
	scanf("%d",&n);
	int i = 0;
	int size = sizeof(list)/sizeof(int);
	for(;i<size;i++){
		if(n == list[i]){
			printf("Your number,%d,is in the list\n",n);
			return 0;
		}
	}
	printf("Your number,%d,isn't in the list\n",n);
	return 0;
}
