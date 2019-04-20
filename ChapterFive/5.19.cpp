//textin4.cpp--reading chars with cin.get()
/*#include<iostream>
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
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int ch;
	int count = 0;
	ch = cin.get();
	while (ch !=  EOF)
	{
		//cout << char(ch);
		cout.put(char(ch));
		++count;
		ch = cin.get();
	}
	cout << endl;
	cout <<count<< " characters read." << endl;
	cin.get();
	return 0;

}*/
#include<iostream>
using namespace std;
int main()
{
	int ch;
	int count = 0;
	while ((ch = cin.get()) != EOF)
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl;
	cout << count << " characters in read." << endl;
	cin.get();
	return 0;
}