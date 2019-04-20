//num_test.cpp--use unmeric test in for loop
#include<iostream>
using namespace std;
int main()
{
	int limit;
	cout << "ÇëÊäÈëlimitµÄÖµ:";
	cin >> limit;
	int i;
	for (i = limit; i; i--)
	{
		cout << "i= " << i << endl;
	}
	cout << "Done now that i= " << i << endl;
	cin.get();
	return 0;


}
