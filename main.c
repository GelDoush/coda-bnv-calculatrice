#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int nb1;
	int nb2;
	char symbol;
	
	printf("Hello user, please choose a symbol (+ | - | / | * | %%)" );
	scanf(" %c",symbol);

	printf("Please enter a number:");
	scanf("%d",nb1);
	printf("Please enter a second number:");
	scanf("%d",nb1);

	return 0;
}
