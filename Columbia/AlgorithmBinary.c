#include <stdio.h>
#include <math.h>

int main(){
	int list[10] = {1,5,10,20,50,60,70,100,2000,5000};
	int times = log(10)/log(2);
	times ++;
	printf("Please input a number\n");
	int n;
	scanf("%d",&n);
	int high = sizeof(list)/sizeof(int);
	int low = 0;
	int i = 0;
	for(;i < (times + 1); i ++){
		int mid = (high+low)/2;
		if(list[mid] == n){
			printf("Your number is in the list\n");
			return 0;
		}
		if(n > list[mid]){
			low = mid;
		}else{
			high = mid;
		}
	}
	printf("Your number isn't in the list\n");
	return 0;
}
		
	
