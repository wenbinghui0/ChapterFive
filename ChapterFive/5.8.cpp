//block.cpp--use a block statement
/*
#include<iostream>
using namespace std;
int main()
{
	int i;
	int temp;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		cout << "value " << i << " :";
		cin >> temp;
		sum += temp;
	}
	float average = sum / 5.0;

	cout << "average:" << average << endl;
	cin.get();
	return 0;

}*/
/*#include<iostream>
using namespace std;
int main()
{
	int x = 20;
	{
		cout << "x= " << x << endl;
		x = 100;
		cout << "x= " << x << endl;

	}
	cout << "x= " << x << endl;
	cout << endl;
	cin.get();
	return 0;
};*/
#include<iostream>
using namespace std;
int main()
{
	int x = 20;
	{
		cout << "x= " << x << endl;
		int x = 100;
		cout << "x= " << x << endl;

	}
	cout << "x= " << x << endl;
	cout << endl;
	cin.get();
	return 0;
};

