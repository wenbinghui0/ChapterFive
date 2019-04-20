//compstr1.cpp--comparing strings using array
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	system("Color F0");
	char word[5] = "?ate";
	char ch;
	for (ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << "word:" << word << endl;
		word[0] = ch;

	}
	cout << "Done!,word:" << word << endl;
	cin.get();
	return 0;
}