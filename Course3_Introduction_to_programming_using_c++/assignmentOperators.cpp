
#include <iostream>
using namespace std;

int main() {

	//Assignment Operators

	int A = 10, B = 20;

	cout << " A = " << A << " B =  " << B << "  --> Start " << endl;


	A += B;

	cout << " A = " << A << " B =  " << B << "  --> A +=B " << endl;

	A -= B;
	cout << " A = " << A << " B =  " << B << "  --> A -=B " << endl;
	A *= B;

	cout << " A = " << A << " B =  " << B << "  --> A *=B " << endl;
	A /= B;

	cout << " A = " << A << " B =  " << B << "  --> A /=B " << endl;
	A %= B;
	cout << " A = " << A << " B =  " << B << "  --> A %=B " << endl;
}

