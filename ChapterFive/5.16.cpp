//textin1.cpp--reading chars with awhile loop
#include<iostream>
using namespace std;
int main()
{
	char ch;
	int count = 0;
	cin >> ch;
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl;
	cout << count << " characters read" << endl;
	cin.get();
	return 0;
}
