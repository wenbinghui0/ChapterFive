//dowhile.cpp--exit-condition loop
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter numbers in the  range of 1-10 to find";
	cout << "my favorite number" << endl;
	do
	{
		cin >> n;
	} while (n != 8);
	cout << "\"yes\"," << n << " is my favorite." << endl;
	cin.get();
	return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
	double array[5] = { 6.0,2.0,5.0,8.0,9.0 };
	for (double x : array)
	{
		cout << x << endl;
	}
	cout << endl;
	for (double x : array)
	{
		x = x*2;
		cout << x << endl;
	}
	cout << endl;
	for (double& x : array)
	{
		x = x*x;
		cout << x << endl;
	}
	cout << endl;
	int a[3] = { 1,2,3 };
	for (int x : {1, 2, 3})
	{
		cout << x << endl;
	}
	cin.get();
	return 0;

}

