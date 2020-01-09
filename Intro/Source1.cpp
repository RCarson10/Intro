//Ron Gaj Carson
//This is my own work
//01/09/20
#include <iostream>

using namespace std;

int main()
{
	/*
		double pounds;
		cout << "Please enter a postive number for pounds";
		cin >> pounds;
	 
		double kilograms = pounds * 0.454;

		cout << kilograms << endl;

		cout << "end of prog" << endl;
	*/
	double hexSide;
	
	cout << "Please enter in a positive number for a hexagon side" << endl;
	cin >> hexSide;

	double areaHex = ((3 * sqrt(3))/2 * pow(hexSide, 2));
	cout << areaHex <<endl;

	return 0;

}