#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main()
{
    printf("Grid initalizing, battleship being placed\n");
    time_t t;
    srand((unsigned) time(&t));
    int pos1 = rand()%11;
    pos1 = pos1 + 97;
    int pos2 = rand()%11;
    printf("%d\n%d\n",pos1,pos2);
    printf("To win, enter the location of the battleship using a letter and a number\nAn 'x' will replace the '.' if you miss your shot\n\n");
    char grid[MAX][MAX];
    int i,j,c;	
    c = 97;
    printf("  1 2 3 4 5 6 7 8 9 10\n");
    for (i = 0; i < 10; i++) {
	printf("%c ",c);
        for (j = 0; j < 10; j++) {
            grid[i][j] = '.';
            printf("%c ", grid[i][j]);
        }
        printf("\n");
	c++;
    }
    int counter;
    char letter;
    int user2;
    printf("\nPlease enter a letter\n");
    scanf(" %c",&letter);
    printf("Please enter a number\n");
    scanf("%d",&user2);
    int user1 = letter;
    int array[202] = {0};
    int tries = 1;
    while((user1 != pos1 && user2 != pos2)){
	counter = 0;
	array[tries*2-2] = user1-97;
	array[tries*2-1] = user2;
	printf("You missed! Reprinting grid\n\n");
	c = 97;
        printf("  1 2 3 4 5 6 7 8 9 10\n");
        for (i = 0; i < 10; i++) {
	    printf("%c ",c);
            for (j = 0; j < 10; j++) {
		if((array[counter*2-1] == j && array[counter*2-2] == i && array[counter*2] != 0)){
			grid[i][j] = 'x';
			printf("%c ", grid[i][j]);
			continue;
		}
                grid[i][j] = '.';
                printf("%c ", grid[i][j]);
            }
            printf("\n");
	    c++;
        }
	printf("\nPlease enter a letter\n");
        scanf(" %c",&letter);
	user1 = letter;
        printf("Please enter a number\n");
        scanf("%d",&user2);
	tries ++;
    }
    printf("Congrats you won\n");
    return 0;
}
