#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	
	/* (qi__sequential) */
	
	/* (qi__variable_declaration) */
	char prename[256];	// array of characters up to 256 characters of 8 bits
	int age;                // integer
	float temperature;      // float

	strncpy(prename, "Bill", sizeof prename);
	age = 23;
	temperature = 36.3f;

	printf("Prename     : %s\n", prename);
	printf("Age         : %d\n", age);
	printf("Temperature : %f\n", temperature);


	/* (qi__conditional) */

	int a;
	int b;
	
	a=3;
	b=12;

	printf("a: %d\n", a);
	printf("b: %d\n", b);

	if (a == b) {	/* (qi__conditional_equal) */
		printf("a equals b\n");
	} else {
		printf("a is not equal to b\n");
	}

	if (a != b) {	/* (qi__conditional_not_equal) */
		printf("a is not equals to b\n");
	} else {
		printf("a is equal to b\n");
	}

	if (a < b) {  	/* (qi__conditional_less_then) */
		printf("a is less then b\n");
	} else {
		printf("a is not less then b\n");
	}

	if (a > b) {  	/* (qi__conditional_greater_then) */
		printf("a is greater then b\n");
	} else {
		printf("a is not greater then b\n");
	}
	/* (/qi__conditional) */



	/* (qi__iterative) */

	int counter=0;
	for (counter = 0; counter < 10; counter++) {
		printf("counter: %d\n", counter);
	}


	/* (qi__boolean_operators) */

	int temp_a=0;
	int temp_b=100;

	if ( (temp_a > 0) && (temp_a < 100) ) {    /* (qi__boolean_and) */
		/* temparature is between 0 and 100 */
	} else {
		/* temparature is not between 0 and 100 */
	}

	if ( (temp_a < 0) || (temp_a > 100) ) {    /* (qi__boolean_or) */
		/* temparature is not between 0 and 100 */
	} else {
		/* temparature is between 0 and 100 */
	}

	/* (/qi__boolean_operators) */

	return(0);
}
