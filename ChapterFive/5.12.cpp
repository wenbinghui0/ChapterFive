//compstr2.cpp--comparing strings using arrays
#include<iostream>
#include<string>
using namespace std;
int main()
{
	system("Color F0");
	string word = "?ate";
	char ch;
	for (ch = 'a'; word != "mate"; ch++)
	{
		cout << "word:" << word << endl;
		word[0] = ch;
	}
	cout << "Done,word:" << word << endl;
	cin.get();
	return 0;
}
