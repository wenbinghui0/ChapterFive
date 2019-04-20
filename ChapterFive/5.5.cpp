//bigstep.cpp--count as directed
#include<iostream>
using namespace std;
int main()
{
	int by;
	cout << "Enter an integer:";
	cin >> by;
	cout << "Counting by " << by << endl;
	for (int i = 0; i < 100; i = i + by)
	{
		cout << i << endl;

	}
	cin.get();
	return 0;
}