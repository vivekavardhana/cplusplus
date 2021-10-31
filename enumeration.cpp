
#include <iostream>
using namespace std;

int main()
{
	enum TSeasons {SPRING = 1, SUMMER, AUTUMN, WINTER};
	TSeasons season;
	int num1;

	cout << "Enter a month number : ";
	cin >> num1;

	switch (num1)
	{
		case 1 :
		case 2 :
		case 3 :
			season = SPRING;
			break;

		case 4 :
		case 5 :
		case 6 :
			season = SUMMER;
			break;

		case 7 :
		case 8 :
		case 9 :
			season = AUTUMN;
			break;

		case 10 :
		case 11 :
		case 12 :
			season = WINTER;
			break;

		default :
			cout << "Not a valid month number." << endl;
	}

	switch (season)
	{
		case SPRING : 
			cout << "Nice weather." << endl;
			break;

		case SUMMER :
			cout << "Hot weather." << endl;
			break;

		case AUTUMN :
			cout << "Yellow everywhere." << endl;
			break;

		case WINTER :
			cout << "Cold weather." << endl;
			break;

		default :
			cout << "Unaware of your weather." << endl;
	}

	return 0;
}