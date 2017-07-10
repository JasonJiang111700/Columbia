#include <stdio.h>

int main(){
	printf("Please enter a number\n");
	int n;
	scanf("%d",&n);
	int b;
	printf("Please enter the bit you want\n");
	scanf("%d",&b);
	if((n >> (b-1)&1) == 0){
		printf("The %dth bit is 0\n",b);
	}else{
		printf("The %dth bit is 1\n",b);
	}
	return 0;
}
