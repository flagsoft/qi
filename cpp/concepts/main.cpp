#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

	// (qi__variable_declaration)
	int a;
	int b;
	
	a=3;
	b=12;
	
	// (qi__sequential)
	// (qi__conditional)
	if (a == b) { // (qi__conditional_equal)
		cout << "a equals b" << endl;
	} else {
		cout << "a is not equal to b" << endl;
	}

	if (a != b) { // (qi__conditional_not_equal)
		cout << "a is not equals to b" << endl;
	} else {
		cout << "a is equal to b" << endl;
	}
	if (a < b) { // (qi__conditional_less_then)
		cout << "a is less then b" << endl;
	} else {
		cout << "a is not less then b" << endl;
	}
	if (a > b) { // (qi__conditional_greater_then)
		cout << "a is greater then b" << endl;
	} else {
		cout << "a is not greater then b" << endl;
	}

	// (/qi__conditional)

	// (qi__iterative)
	int counter=0;
	for (counter = 0; counter < 9; counter++) {
		cout << "counter: " << counter << endl;
	}
	
	// (qi__boolean_operators)
	int temp_a=0;
	int temp_b=100;
	if ( (temp_a > 0) && (temp_a < 100) ) { // (qi__boolean_and)
		// temparature is between 0 and 100
	} else {
		// temparature is not between 0 and 100
	}
	if ( (temp_a < 0) || (temp_a > 100) ) { // (qi__boolean_or)
		// temparature is not between 0 and 100
	} else {
		// temparature is between 0 and 100
	}
	// (/qi__boolean_operators)

	return(0);
}
