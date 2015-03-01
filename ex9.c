#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};
	
	// this is the raw print
	printf("numbers: %d %d %d %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);
	
	printf("name each: %c %c %c %c \n", name[0], name[1], name[2], name[3]);
	
	printf("name: %s\n", name);
	
	// This sets up the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	
	// This sets up the name
	name[0] = 'R';
	name[1] = 'o';
	name[2] = 'b';
	name[3] = '\0';
	
	// This prints the initialized values
	printf("numbers: %d %d %d %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);
	
	printf("name each: %c %c %c %c \n", name[0], name[1], name[2], name[3]);
	
	// Printing the name like a string
	printf("name: %s\n", name);
	
	// Using name another way
	char *another = "Rob";
	
	printf("another: %s\n", another);
	
	printf("another each: %c %c %c %c \n", another[0], another[1], another[2], another[3]);
		
	return 0;
}
	
	
