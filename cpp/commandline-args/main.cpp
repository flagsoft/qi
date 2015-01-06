#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char *prog_name = argv[0];
	int num_args = argc - 1;
	char *first_arg = argv[1];
  
	cout << "Program name (qi__prog_name): " << prog_name << endl;
	cout << "Number of arguments (qi__num_args): " << num_args << endl;
	cout << "First argument (qi__first_arg): " << first_arg << endl;

	if (argc > 1) {
		int count=0;
		for (count = 1; count < argc; count++) {
			cout << "(qi__argv)" << count << " = " << argv[count] << endl;
		}
	} else {
		cout << "The command had no other arguments (qi__args_none)." << endl;
	}
	return(0);
}
