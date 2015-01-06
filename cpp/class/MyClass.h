#include <iostream>

class MyClass {

	public:
		MyClass();  // (qi__constructor)
		~MyClass(); // (qi__destructor)

   		void setValue(int in_val);
   		int getValue();

	private:
		int value;
};
