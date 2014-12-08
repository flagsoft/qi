#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Program name (prog_name): %s\n", argv[0]);
	printf("Number of arguments (num_args): %d\n", argc-1);
	printf("First argument (first_arg): %s\n", argv[1]);
	
	if (argc > 1) {
		for (count = 1; count < argc; count++) {
			printf("(argv_%d) = %s\n", count, argv[count]);
		}
	} else {
		printf("The command had no other arguments (args_none).\n");
	}

	return(0);
}
