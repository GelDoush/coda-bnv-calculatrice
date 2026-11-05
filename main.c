#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int nb1;
	int nb2;
	char symbol;
	int resultat;
	
	printf("Hello user, please choose a symbol (+ | - | / | * | %%) : " );
	scanf(" %c", &symbol);

	printf("Please enter a number : ");
	scanf("%d", &nb1);
	printf("Please enter a second number : ");
	scanf("%d", &nb1);

	if (symbol == '+') {
		printf("addition\n");
	}

	else if (symbol == '-') {
		printf("soustraction\n");
	}

	else if (symbol == '*') {
		printf("multiplication\n");
	}

	else if (symbol == '/') {
		printf("division\n");
	}

	else if (symbol == '%') {
		printf("modulo\n");		
	}

	else {
		printf("Error, symbol not detected\n");
	}

	return 0;
}
