#include <iostream>
using namespace std;

int main() {

	// Not worrying about the prime number 2
	// Because our value is odd and thus 2
	// Cannot be the largest prime
	long value = 600851475143;
	long divider = 1;

	while (value > divider) {

		if ((value % divider) == 0) {
			value /= divider;
		}
		divider += 2;
	}

	cout << "Value is " << value << endl;

	return 0;
}