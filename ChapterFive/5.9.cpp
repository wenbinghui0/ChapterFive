//forstr2.cpp--reversing an array
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word;
	cout << "Enter a word:";
	cin >> word;

	int i, j=0;
	char temp;
	int len = word.size();
	for (i = len - 1; j < i; --i, ++j)
	{
		temp = word[j];
		word[j] = word[i];
		word[i] = temp;
	}
	cout << "word µÄµ¹ÐòÊä³ö:" << word << endl;
	cin.get();
	return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
	int a;
	a = 3, 100;
	cout << "a= " << a << endl;
	a = (3, 100);
	cout << "a= " << a << endl;
	cout << endl;
	cout << 3, 10;
	cout << endl;
	cout << (3, 100) << endl;

	cin.get();
	return 0;
}
