//express.cpp--values of expressions
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "The expression x=100 has the value: " << (x = 100) << endl;
	cout << "The expression x<3 has the value: " << (x < 3) << endl;
	cout << "The expression x>3 has the value: " << (x > 3) << endl;
	cout << endl;
	cout.setf(ios_base::boolalpha);
	cout << "The expression x<3 has the value: " << (x < 3) << endl;
	cout << "The expression x>3 has the value: " << (x > 3) << endl;

	cin.get();
	return 0;
}