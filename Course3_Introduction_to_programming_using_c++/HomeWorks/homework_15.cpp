#include <iostream>
using namespace std;

int main() {

	int A, B;

	cout << "please enter the first number A ? " << endl;
	cin >> A;

	cout << "please enter the second number B ?" << endl;
	cin >> B;

	cout << "comperation : " << endl;
	cout << " A == B " << " is -> "<< (A == B) << endl;
	cout << " A != B " << " is -> "<< (A != B) << endl;
	cout << " A > B "  << " is -> "<< (A > B)  << endl;
	cout << " A >= B " << " is -> "<< (A >= B) << endl;
	cout << " A < B "  << " is -> "<< (A < B)  << endl;
	cout << " A <= B " << " is -> "<< (A <= B) << endl;

	/*
	Beispiel-Eingabe:
	A = 5
	B = 8

	Ausgabe:
	comperation :
	 A == B  is -> 0    // 5 ist nicht gleich 8 → falsch → 0
	 A != B  is -> 1    // 5 ist ungleich 8 → wahr → 1
	 A > B   is -> 0    // 5 ist nicht größer als 8 → falsch → 0
	 A >= B  is -> 0    // 5 ist nicht größer oder gleich 8 → falsch → 0
	 A < B   is -> 1    // 5 ist kleiner als 8 → wahr → 1
	 A <= B  is -> 1    // 5 ist kleiner oder gleich 8 → wahr → 1
	*/

	return 0;
}
