//former.cpp--more looping with for
#include<iostream>
using namespace std;
const int arrysize = 16;
int main()
{
	long long array[arrysize];
	array[0] = array[1] = 1LL;
	int i;

	for (i = 2; i < arrysize; i++)
	{
		array[i] = array[i-1] * i;
	}
	for (i = 0; i < arrysize; i++)
	{
		cout << i << "! = " << array[i] << endl;

	}

	cin.get();
	return 0;
}

