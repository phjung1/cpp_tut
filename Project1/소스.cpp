#include <iostream>	

using namespace std; // make names from std visible without std::

double square(double x) { // square a  double precision floating-point number
	return x * x;
}

void print_square(double x) { // A "return type" void indicates a function does not return a value.
	cout << "the square of " << x << " is " << square(x) << "\n";
}

int main() {
	print_square(1.234); //print: the suqare of 1.234 is 1.52278
}