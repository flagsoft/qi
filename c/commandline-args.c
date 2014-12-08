
#include <stdio.h>

int main(int argc, char *argv[])
{
	char *prog_name = argv[0];
	int num_args = argc-1;
	char *first_arg = argv[1];
	
	printf("Program name (prog_name): %s\n", prog_name);
	printf("Number of arguments (num_args): %d\n", num_args);
	printf("First argument (first_arg): %s\n", first_arg);
	
	if (argc > 1) {
		for (count = 1; count < argc; count++) {
			printf("(argv_%d) = %s\n", count, argv[count]);
		}
	} else {
		printf("The command had no other arguments (args_none).\n");
	}

	return(0);
}

