#include <stdio.h>

int main(int argc, char *argv[])

{
	int bugs = 100;
	double bug_rate = 1.2;
	
	printf("You hae %d bugs at the imaginary rate of %f. \n", bugs, bug_rate);
	
	long defects = 1L * 1024L * 1024L * 1024L;
	printf("The entire universe has %ld bugs. \n", defects);
	
	double exp_bugs = bugs * bug_rate;
	printf("We expect %f bugs. \n", exp_bugs);
	
	double uni_part = exp_bugs / defects;
	printf("We have %e proportional bugs. \n", uni_part);
	
	// nonsensical test weirdness
	
	char nul_byte = '\0';
	int care = bugs * nul_byte;
	printf("This means you should care %d%%. \n", care);
	
	return 0;
}
