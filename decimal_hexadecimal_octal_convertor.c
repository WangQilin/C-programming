#include <stdio.h>
int main(void) {
	int number; 
	int choice;

	printf("1. Convert from decimal to octal.\n");
	printf("2. Convert from decimal to hexadecimal.\n");
	printf("3. Convert from octal to decimal.\n");
	printf("4. Convert from hexadecimal to decimal.\n");
	printf("Choose the operation you want to perform(1-4): ");
	scanf("%d", &choice);
	
	printf("Please enter the number: ");
	switch(choice) {
		case 1:	
			scanf("%d", &number);
			printf("Decimal %d is %#o in octal.\n", number, number);
		case 2:  
			scanf("%d", &number);
			printf("Decimal %d is %#x in hexadecimal.\n", number, number);
		case 3:  
			scanf("%o", &number);
			printf("Octal %#o is %d in decimal.\n", number, number);
		case 4:	
			scanf("%x", &number);
			printf("Hexadecimal %#x is %d in decimal.\n", number, number);
	}
	
	return 0;
}
