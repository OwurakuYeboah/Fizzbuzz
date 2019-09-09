/* FIZZBUZZ
This program prints numbers from 1 to 100, but the program prints FIZZ if the number is a multiple of 3,
BUZZ if the number is a multiple of 5,
and FIZZBUZZ if the number is a multiple of 3 and 5
*/

#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 100; ++i) // Loops through numbers from 1 to 100
	{
		if (i % 3 == 0 && i % 5 == 0) // This prints FIZZBUZZ if the number is a multiple of 3 and 5
			cout << "FIZZBUZZ" << endl;
		else if (i % 3 == 0)	// This prints FIZZ if the number is a multiple of 3
			cout << "FIZZ" << endl;
		else if (i % 5 == 0)	// This prints BUZZ if the number is a multiple of 5
			cout << "BUZZ" << endl;
		else
			cout << i << endl;
	
	}
	system("pause");
	return 0;
 
}

