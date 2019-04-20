/******************************************************************************************************************/
/*                                       第 五 章  编程习题                                                       */
/******************************************************************************************************************/
/*1.编写一个要求用户输入两个整数的程序。该程序将计算并输出这两个整数之间(包括这两个整数)所有整数的和。这里假设先输入较小的整数。
    例如，如果用户输入的是2和9,则程序将指出2~9之间所有整数的和为44。                                                                                                */
/*#include<iostream>
using namespace std;
int main()
{
	int min, max;
	int sum=0;
	int i;
	cout << "请输入第一个整数:";
	cin >> min;
	cout << "请输入第二个数:";
	cin >> max;
	for (i = min; i <= max; i++)
	{
		sum = sum + i;
	}
	cout << min << " - " << max << "之间所有整数的和(包括这两个整数)为" << sum << endl;
	cin.get();
	return 0;
}*/


/*2.使用array对象(而不是数组)和long double (而不是long long) 重新编写程序清单5.4,并计算100!的值。                                                               */
/*#include<iostream>
using namespace std;
int main()
{
	long double s=1.0;
	int i;
	cout << 0 << "! =" << 1 << endl;
	for (i = 1; i < 101; i++)
	{
		s = s*i;
		cout << i << "! =" << s << endl;
	}
	cin.get();
	return 0;

}*/



/*3.编写一个要求用户输入数字的程序。每次输入后，程序都将报告到目前为止，所有输入的累计和。当用户输入0时，程序结束。                                             */
/*#include<iostream>
using namespace std;
int main()
{
	int num;
	int s=0;
	cout << "请输入第一个数据:";
	cin >> num;
	while (num != 0)
	{
		s = s + num;
		cout << "请输入下一个数据:";
		cin >> num;
	}
	cout << "所有输入的累计和：" << s << endl;
	cout << "Done,num=" << num << endl;
	cin.get();
	return 0;
}*/

/*4.Daphne 以10%的单利投资了100美元。也就是说，每一年的利润都是投资额的10%，即每年10美元:利息=0.10*原始存款
    而Cleo以5%的复利投资了100美元。也就是说，利息是当前存款(包括获得的利息)的5%,:利息=0.050*当前存款
    Cleo在第一年投资100美元的盈利是5%得到了 105 美元。下一年的盈利是105美元的5%即5.25美元，依此类推。
	请编写个程序，计算多少年后，Clco 的投资价值才能超过Daphne的投资价值，并显示此时两个人的投资价值。                                                           */
#include<iostream>
using namespace std;
int main()
{
	const float principal = 100;
	const float interest1 = 0.05261;
	const float interest2 = 0.05;
	double Dapinterest= principal*interest1;
	double Cleinterest= 0.0;
	int count = 0;
	do
	{
		count++;
		Dapinterest = Dapinterest*1;
		Cleinterest =(principal+Cleinterest)*interest2;
		cout << "此时Daphne的投资价值:" << Dapinterest << endl;
		cout << "此时Cleo的投资价值:" << Cleinterest << endl;
	} while (Cleinterest <= Dapinterest);
	cout << count << "年后，Clco 的投资价值才能超过Daphne的投资价值" << endl;
	cout << "此时Daphne的投资价值:" << Dapinterest << endl;
	cout << "此时Cleo的投资价值:" << Cleinterest << endl;
	cin.get();
	return 0;

}
//未解决问题


/*5.假设要销售(C++ ForFools) 一书。请编写一个程序，输入全年中每个月的销售量(图书数量，而不是销售额). 程序通过循环，
    使用初始化为月份字符串的char *数组(或string对象数组)逐月进行提示，并将输入的数据储存在个int 数组中。
	然后，程序计算数组中各元素的总数， 并报告这一年的销售情况。                                                                                                 */
/*#include<iostream>
#include<string>
using namespace std;
const int Year = 12;
int main()
{
	char* month[Year] = { "January","February","March","April ","May","June","July","August","September","October","November","December " };
	int SalesVolume[Year];
	int i;
	cout << "请输入全年各个月份的销售量:" << endl;
	for (i = 0; i < Year; i++)
	{
		cout << month[i] << ":";
		cin >> SalesVolume[i];
	}
	int sum = 0;
	for (i = 0; i < Year; i++)
	{
		sum += SalesVolume[i];
	}
	cout << "全年的销售总量:" << sum << endl;
	cin.get();
	return 0;
	
}*/


/*6.完成编程练习5,但这一次使用一个二维数组来存储输入一 3年中每个月的销售量。程序将报告每年销售量以及三年的总销售量。                                            */
/*#include<iostream>
using namespace std;
const int Year = 12;
int main()
{
	system("Color F0");
	const int year[3] = { 2015,2018,2019 };
	char* month[Year] = { "January","February","March","April ","May","June","July","August","September","October","November","December " };
	int SalesVolume[Year];
	int salenum[3][Year];
	int i,j;
	for (i = 0; i< 3; i++)
	{
		cout << "年份：" << year[i] << "各月份销售量:" << endl;
		for (j = 0; j < Year; j++)
		{
			cout << month[j] << ":";
			cin >> salenum[i][j];
		}
	}
	int yearnum[3];
	int sum=0;
	for (i = 0; i < 3; i++)
	{
		yearnum[i] = 0;
		for (j = 0; j < Year; j++)
		{
			yearnum[i] = yearnum[i] + salenum[i][j];
		}
		cout << year[i] << "的销售量为:" << yearnum[i] << endl;
		sum = sum + yearnum[i];
	}
	cout << "三年的销售总量:" << sum << endl;
	cin.get();
	return 0;

}*/


/*7.设计一个名为car的结构，用它存储下述有关汽车的信息:生产商(存储在字符数组或string对象中的字符串)、生产年份(整数)。
    编写一个程序，向用户询问有多少辆汽车。随后，程序使用new来创建一个由相应数量的car结构组成的动态数组。
	接下来，程序提示用户输入每辆车的生产商(可能由多个单词组成)和年份信息。
	请注意，这需要特别小心，因为它将交替读取数值和字符串(参见第4章).最后，程序将显示每个结构的内容。
	该程序的运行情况如下:
    How many cars do you wish to catalog? 2
    Car #1:
    Please enter the make: Hudson Hornet
	Please enter the year made: 1952
    Car #2:
    Please enter the make: Kaiser
    Please enter the year made: 1951
    Here is your collection:
    1952 Hudson Hornet
    1951 Kaiser                                                                                                                                                */
/*#include<iostream>
#include<string>
using namespace std;
struct car
{
	string name;
	int year;
};
int main()
{
	system("Color F0");
	int n;
	cout << "How many cars do you wish to catalog? ";
	cin >> n;
	cin.get();
	car* pt = new car[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Please enter the make:";
		getline(cin,(pt[i].name));
		cout << "Please enter the year made:";
		cin >> (pt[i].year);
		cin.get();
	}
	cout << "Here is your collection:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << pt[i].year << " " << pt[i].name << endl;
	}
	delete [] pt;
	cin.get();
	return 0;

}*/


/*8.编写一个程序，它使用一个char数组和循环来每次读取一个单词，直到用户输入done为止。
    随后，该程序指出用户输入了多少个单词(不包括done在内。
	下面是该程序的运行情况:
    Enter words (to stop, type the word done):
	anteater birthday category dumpster
	envy finagle geometry done for sure
	You entered a total of 7 words .
    您应在程序中包含头文件cstring,并使用函数stremp()来进行比较测试。                                                                                          */
/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char word[20];
	cout << "Enter words (to stop, type the word done):" << endl;
	int count = 0;
	do
	{
		count++;
		cin>>word;

	} while (strcmp(word, "done"));
	cout << "You entered a total of " << count - 1 << " words." << endl;
	cin.get();
	return 0;
}*/

/*9.编写一个满足前一个练习中描述的程序，但使用string对象而不是字符数组。请在程序中包含头文件string,并使用关系运算符来进行比较测试。                           */
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word;
	cout << "Enter words (to stop, type the word done):" << endl;
	int count = 0;
	do
	{
		cin >> word;
		count++;
	} while (word != "done");
	cout << "You entered a total of " << count - 1 << " words." << endl;
	cin.get();
	return 0;

}*/

/*10.编写一个使用嵌套循环的程序，要求用户输入一一个值，指出要显示多少行。
     然后，程序将显示相应行数的星号，其中第一行包括一个星号，第二行包括两个星号，依此类推。
	 每一行包含的字符数等于用户指定的行数，在星号不够的情况下，在星号前面加上句点。
	 该程序的运行情况如下: 
     Enter number of rows: 5
	 ....*
	 ...**
	 ..***
	 .****
	 *****                                                                                                                                                   */
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	int i, j;
	cout << "Enter number of rows:";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = n-1; j > i; j--)
		{
			cout.put('.');
		}
		for (j = 0; j <=i; j++)
		{
			cout.put('*');
		}
		cout << endl;
	}
	cin.get();
	return 0;
}*/
