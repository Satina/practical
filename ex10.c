#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	
	// each string in argv why am i skipping argv[0]
	
	for(i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}
	
	// an array of strings
	char *states[] = {
		"California", "Texas", "Oregon", "Maine", "Peru", "Utah"
	};
	int num_states = 6;
	for(i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	}
	return 0;
}
