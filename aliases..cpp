
#include <iostream>
using namespace std;

int &Func( void )
{
	static int a = 0;
	cout << "a == " << a << endl;
	return a;
}

int main()
{
	int x = 3, &y = x , z;  // y is now an alias for x

    cout << "x = " << x << endl << "y = " << y << endl;
    y = 7;
    cout << "x = " << x << endl << "y = " << y << endl;
	// All operations supposedly performed on the alias (i.e. the reference) are actually performed on the original variable itself.
	z = y;
	cout << "z = "<< z ;

	cout << "\nA function returning a reference: \n\n";

	Func();
	Func() = 5;
	Func() += 5;
	Func();

	cout << "\n\nPress ENTER to exit.\n";
	cin.get();


    return 0;
}