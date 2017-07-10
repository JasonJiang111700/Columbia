#include <stdio.h>

int main(){
	printf("Please enter a number\n");
	int n;
	scanf("%d",&n);
	if((n >> (sizeof(int)*8-1))&1 == 0){
		printf("The most significant bit isn't set\n");
	}else{
		printf("The most significant bit is set\n");
	}
	return 0;
}
