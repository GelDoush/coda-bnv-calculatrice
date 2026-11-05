#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int nb1;
	int nb2;
	char symbol;
	int result;
	
	printf("Hello user, please choose a symbol (+ | - | / | * | %%) : " );
	scanf(" %c", &symbol);

	printf("Please enter a number : ");
	scanf("%d", &nb1);
	printf("Please enter a second number : ");
	scanf("%d", &nb2);

	if (symbol == '+') {
		result=nb1+nb2;
		printf("%d %c %d = %d\n",nb1,symbol,nb2,result);
	}

	else if (symbol == '-') {
		result=nb1-nb2;
		printf("%d %c %d = %d\n",nb1,symbol,nb2,result);
	}

	else if (symbol == '*') {
		result=nb1*nb2;
		printf("%d %c %d = %d\n",nb1,symbol,nb2,result);
	}

	else if (symbol == '/') {
		result=nb1/nb2;
		printf("%d %c %d = %d\n",nb1,symbol,nb2,result);
	}

	else if (symbol == '%') {
		result=nb1%nb2;
		printf("%d %c %d = %d\n",nb1,symbol,nb2,result);		
	}

	else {
		printf("Error, symbol not detected\n");
	}

	return 0;
}
