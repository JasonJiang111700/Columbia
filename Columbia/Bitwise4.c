#include <stdio.h>

int main(){
	printf("Please enter a number\n");
	int n;
	scanf("%d",&n);
	int b;
	printf("Please enter the bit you want to clear\n");
	scanf("%d",&b);
	int new;
	new = (n >> b-1)&(~1);
	printf("%d is your new number\n",new);
	return 0;
}
