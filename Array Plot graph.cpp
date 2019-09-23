#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void main()
{
	// Set Random Seed
	srand((unsigned int)time(NULL));

	int rand_num = 0;
	int one, two, three, four, five, six;

	one = two = three = four = five = six = 0;

	cout << "Random Number" << endl;
	cout << "=============" << endl;

	// Loop for Random
	for (int n = 1; n <= 100; n++)
	{
		rand_num = 1 + (rand() % 6);	// Random : 1 + (0 - 5)

		switch (rand_num)				// Check Random Number
		{
		case 1: one++;
			break;
		case 2: two++;
			break;
		case 3: three++;
			break;
		case 4: four++;
			break;
		case 5: five++;
			break;
		case 6: six++;
			break;
		}

		// [Show random number], [Set Width for empty space(' ') 5 letter]
		cout << setw(5) << setfill(' ') << rand_num;

		// For do a new line
		if (n % 10 == 0)
		{
			cout << endl;
		}
	}

	// Show Frequency of Number
	cout << "\n  Frequency" << endl;
	cout << "=============" << endl;
	cout << "1 : " << one << endl;
	cout << "2 : " << two << endl;
	cout << "3 : " << three << endl;
	cout << "4 : " << four << endl;
	cout << "5 : " << five << endl;
	cout << "6 : " << six << endl;

	system("PAUSE");
}
