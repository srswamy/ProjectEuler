#include <iostream>
using namespace std;

int main() {

	int previous1 = 1;
	int previous2 = 2;
	int current = 0;
	int sum = 2;

	while (current < 4000000) {

		 current = previous1 + previous2;
		if ((current % 2) == 0) {
			sum += current;
		}
		previous1 = previous2;
		previous2 = current;
	}

	cout << "Sum is: " << sum << endl;

	return 0;
}