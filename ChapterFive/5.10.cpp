//equal.cpp--equality vs assignment
#include<iostream>
using namespace std;
int main()
{
	int arry[10] = { 20,20,20,20,20,19,20,18,20,20 };
	int i;
	for (i = 0; arry[i] == 20; i++)
	{
		cout << "quiz " << i << " is a 20" << endl;
	}
	cout << endl;
	for (i = 0; arry[i] = 20; i++)
	{
		cout << "quiz " << i << " is a 20" << endl;
	}

	cin.get();
	return 0;

}
