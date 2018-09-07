#include <iostream>
using namespace std;

//Write a program that continually accepts positive values from the user, calculate the largest Factor for the number (E.g.  The largest factor of 24 is 12)

int main()
{
	int value = 0;
	int i = 0;
	int largest = 0;


	// making sure the loop condition is executed at least one
	do {

		cout << " " << endl;
		cout << " Enter a positive value: " << endl;
		cout << " To cancel : Enter zero(0)" << endl;
		cin >> value;

		// Stop the execution when user enter a 0
		if (value == 0)
			break;

		for (i = value - 1; i > 0; i--)
		{
			if (value % i == 0)
			{
				largest = i;
				break;
			}
		}
		cout << " Largest factor is: " << largest << endl;



	} while (value > i);
	cout << " " << endl;
	cout << "GOODBYE!" << endl;
	system("pause");
	return 0;
}
