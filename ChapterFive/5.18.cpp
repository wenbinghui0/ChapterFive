//textin3.cpp--reading chars to end of file

#include<iostream>
using namespace std;
int main()
{
	char ch;
	int count = 0;
	cin.get(ch);
	while (cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl;
	cout << count << " characters read." << endl;
	cin.get();
	return 0;
}

