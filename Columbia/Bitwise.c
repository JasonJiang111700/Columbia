#include <stdio.h>

int main(){
	printf("Please enter a number\n");
	int n;
	scanf("%d",&n);
	if(n&1 == 0){
		printf("The least significant bit isn't set\n");
	}else{
		printf("The least significant bit is set\n");
	}
	return 0;
}
