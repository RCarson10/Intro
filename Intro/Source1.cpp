//Ron Gaj Carson
//This is my own work
//01/09/20
#include <iostream>

using namespace std;

int main()
{
	/*
		Problem 1

		double pounds;
		cout << "Please enter a postive number for pounds";
		cin >> pounds;
	 
		double kilograms = pounds * 0.454;

		cout << kilograms << endl;

		cout << "end of prog" << endl;

		----------------------------------------------------------------------------------------------------
		Problem 2

		double hexSide;
	
		cout << "Please enter in a positive number for a hexagon side" << endl;
		cin >> hexSide;

		double areaHex = ((3 * sqrt(3))/2 * pow(hexSide, 2));
		cout << areaHex <<endl;
	
	Problem 3
	--------------------------------------------------------------------------------
	*/
	int num1;
	int num2;
	int larger;

	cout << "Please enter in a positive number" << endl;
	cin >> num1;
	
	cout << "One more time please"<< endl;
	cin >> num2;

	for (int i = 0; i < 2; i++)
	{
		larger = fmax(num1, num2);
	}

	cout << larger;
	
	return 0;
	

}