#include <stdio.h>

int main(int argc, char *argv[])
{
	char *prog_name = argv[0];
	int num_args = argc - 1;
	char *first_arg = argv[1];
	
	printf("Program name (qi__prog_name): %s\n", prog_name);
	printf("Number of arguments (qi__num_args): %d\n", num_args);
	printf("First argument (qi__first_arg): %s\n", first_arg);
	
	if (argc > 1) {
		int count=0;
		for (count = 1; count < argc; count++) {
			printf("(qi__argv_%d) = %s\n", count, argv[count]);
		}
	} else {
		printf("The command had no other arguments (qi__args_none).\n");
	}

	return(0);
}
