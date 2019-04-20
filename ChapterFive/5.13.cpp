//while.cpp--introducing the while loop
/*#include<iostream>
using namespace std;
const int arraysize = 100;
int main()
{
	char name[arraysize];
	cout << "Enter a name:";
	cin >> name;
	int i = 0;
	while (name[i] != '\0')
	{
		cout << "name" << i << ": " << name[i]<<" 对应的ASCII码为:"<<int(name[i]) << endl;
		i++;
	}
	cin.get();
	return 0;

}*/
#include<iostream>
using namespace std;
const int arraysize = 20;
int main()
{
	char name[arraysize];
	cout << "Enter a name:";
	cin >> name;
	int i;
	cout << "name:" << name << endl;
	for (i = 0; name[i] != '\0'; i++)
	{
		cout << "name" << i << ": " << name[i] << " 对应的ASCII码为:" << int(name[i]) << endl;
	}
	cin.get();
	return 0;
}