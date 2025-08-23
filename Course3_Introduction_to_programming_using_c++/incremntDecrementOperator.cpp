
#include <iostream>
using namespace std;

int main()
{

	int A = 10, B = 20;

	A++;// same as A = A + 1
	B--; // same as B = B +1

	cout << "A = " << A << endl;
	cout << "B = " << B << endl;

    
}

#include <iostream>
using namespace std;

int main()
{
    int A, B;

    A = 10;
    cout << "A = " << A << endl;

    B = ++A;
    cout << "B = ++A  ===> " << B << endl;
    cout << "A = " << A << endl;

    B = A++;
    cout << "B = A++  ===> " << B << endl;
    cout << "A = " << A << endl;

    /*
    Ausgabe:

    A = 10
    B = ++A  ===> 11   // A wird zuerst erhöht (10 → 11), dann in B gespeichert
    A = 11             // A ist jetzt 11

    B = A++  ===> 11   // A wird zuerst in B gespeichert (B = 11), dann erhöht (A wird 12)
    A = 12             // A ist jetzt 12
    */
}




