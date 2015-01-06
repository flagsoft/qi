#include <iostream>

class MyClass {

	MyClass();  // (qi__constructor)
	~MyClass(); // (qi__destructor)

	public:
   		void setValue(int in_val);
   		int getValue();

	private:
		int value;
};
