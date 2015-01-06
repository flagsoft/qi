#include <iostream>

#include "MyClass.h"

using namespace std;


// (qi__constructor)
MyClass::MyClass() {
	cout << "constructor";
}

// (qi__destructor)
MyClass::~MyClass() {
	cout << "destructor";
}


void MyClass::setValue(int in_val) {
	value = in_val;
}
int MyClass::getValue() {
	return(value);
}

