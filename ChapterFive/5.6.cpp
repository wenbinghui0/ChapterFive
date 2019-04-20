//forstr1.cpp--using for with as string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	system("Color F0");
	string word;
	cout << "Enter a word:";
	cin >> word;

	int num = word.size() - 1;
	cout << "word·´ÐòÊä³ö:";
	for (int i =num ; i >= 0; i--)
	{
		cout << word[i];
	}
	cout << endl;
	cin.get();
	return 0;

}
