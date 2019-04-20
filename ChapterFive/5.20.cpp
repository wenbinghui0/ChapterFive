//neested.cpp--nested loops and 2-D array
#include<iostream>
using namespace std;
const int Years = 4;
const int Cities = 5;
int main()
{
	system("Color F0");
	const char* cities[5] =
	{
		"CGDHAVGCV cdv",
		"shcbhsbhbsb b",
		"sdbhsdvvdgyuy",
		"sdgaygygyacys",
		"yweyweryfegay"
	};
	int maxtemps[Years][Cities]=
	{
		{96,100,87,101,105},
		{96,85,85,96,88},
		{100,100,101,102,103},
		{85,88,88,89,95}
	};
	cout << "Maxium temperatures for 2008-2011" << endl<<endl;
	for (int city = 0; city < Cities; city++)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; year++)
		{
			cout << maxtemps[year][city] << "\t";
		}
		cout << endl;
	}
	cin.get();
	return 0;

}