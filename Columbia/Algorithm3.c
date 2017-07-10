#include <stdio.h>
#include <stdlib.h>

int main(){
	time_t t;
	srand((unsigned) time(&t));
	int i;
	FILE *f;
	f = fopen("Random.txt","w");
	for(i = 0;i<100;i++){
		fprintf(f , "%d\n", rand()%10000);
	}
	fclose(f);
	printf("File printed");
	return 0;
}
