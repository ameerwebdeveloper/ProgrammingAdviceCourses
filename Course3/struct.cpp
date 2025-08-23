#include <iostream>
#include <cmath>

// Explanation of struct in C++:
// A struct is a user-defined data type that allows grouping different variables together under one name.
// It can hold variables of different types, making it useful for representing complex entities.

using namespace std;

struct stAddress
{
	string street;
	string POBOX;
};

struct stOwner {
	string name;
	string gender;
	bool isMarried;
	stAddress address;
};

struct stCar {
	string Brand;
	string Model;
	int Year;
	stOwner Owner;
};

int main() {
  
	stCar MyCar1; // Example: Creating an instance of the stCar struct

	MyCar1.Brand = "BMW";
	MyCar1.Model = "X5";
	MyCar1.Year = 2000;

	MyCar1.Owner.name = "Ameer";
	MyCar1.Owner.gender = "male";
	MyCar1.Owner.isMarried = 1;

	MyCar1.Owner.address.street = "Muster str.";
	MyCar1.Owner.address.POBOX = "19453";

	cout << MyCar1.Brand << " " << MyCar1.Model << "  " << MyCar1.Year << endl;
	cout << MyCar1.Owner.name << " " << MyCar1.Owner.gender << "  " << MyCar1.Owner.isMarried << endl;
	cout << MyCar1.Owner.address.street << " " << MyCar1.Owner.address.POBOX << endl;

	cout << "---------------------------------------------" << endl;

	// You can also read struct members from console input
	
	stCar MyCar2;

	cout << "Enter Car Brand: " << endl;
	cin >> MyCar2.Brand;
	cout << "Enter Car Model: " << endl;
	cin >> MyCar2.Model;
	cout << "Enter Car production year: " << endl;
	cin >> MyCar2.Year;

	cout << "----------- You entered -----------" << endl;
	cout << MyCar2.Brand << " " << MyCar2.Model << "  " << MyCar2.Year << endl;

}

/*
===================== Tutorial: Structs in C++ =====================

In C++, a struct (short for "structure") is a composite data type that 
groups variables of different types under a single name. This makes it 
ideal for modeling real-world entities that have multiple attributes.

Key points from this example:
1. Declaring a struct:
   - Syntax:
       struct StructName {
           dataType member1;
           dataType member2;
           ...
       };
   - Can contain variables of different types, including other structs.

2. Nested structs:
   - A struct can have members that are other structs, 
     allowing complex hierarchical data modeling.
   - Example: stCar contains stOwner, which contains stAddress.

3. Creating and using struct variables:
   - Declare: stCar MyCar;
   - Access members using the dot (.) operator:
       MyCar.Brand = "BMW";
       MyCar.Owner.name = "Ameer";

4. Reading struct data from the console:
   - Use `cin` to assign values directly to struct members.
   - Example: `cin >> MyCar2.Brand;`

5. Advantages:
   - Improves code organization and readability.
   - Groups related data logically.
   - Useful for passing multiple related values to functions.

====================================================================
*/
