/******************************************************************************************************************/
/*                                       �� �� ��  ���ϰ��                                                       */
/******************************************************************************************************************/
/*1.��дһ��Ҫ���û��������������ĳ��򡣸ó��򽫼��㲢�������������֮��(��������������)���������ĺ͡���������������С��������
    ���磬����û��������2��9,�����ָ��2~9֮�����������ĺ�Ϊ44��                                                                                                */
/*#include<iostream>
using namespace std;
int main()
{
	int min, max;
	int sum=0;
	int i;
	cout << "�������һ������:";
	cin >> min;
	cout << "������ڶ�����:";
	cin >> max;
	for (i = min; i <= max; i++)
	{
		sum = sum + i;
	}
	cout << min << " - " << max << "֮�����������ĺ�(��������������)Ϊ" << sum << endl;
	cin.get();
	return 0;
}*/


/*2.ʹ��array����(����������)��long double (������long long) ���±�д�����嵥5.4,������100!��ֵ��                                                               */
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



/*3.��дһ��Ҫ���û��������ֵĳ���ÿ������󣬳��򶼽����浽ĿǰΪֹ������������ۼƺ͡����û�����0ʱ�����������                                             */
/*#include<iostream>
using namespace std;
int main()
{
	int num;
	int s=0;
	cout << "�������һ������:";
	cin >> num;
	while (num != 0)
	{
		s = s + num;
		cout << "��������һ������:";
		cin >> num;
	}
	cout << "����������ۼƺͣ�" << s << endl;
	cout << "Done,num=" << num << endl;
	cin.get();
	return 0;
}*/

/*4.Daphne ��10%�ĵ���Ͷ����100��Ԫ��Ҳ����˵��ÿһ���������Ͷ�ʶ��10%����ÿ��10��Ԫ:��Ϣ=0.10*ԭʼ���
    ��Cleo��5%�ĸ���Ͷ����100��Ԫ��Ҳ����˵����Ϣ�ǵ�ǰ���(������õ���Ϣ)��5%,:��Ϣ=0.050*��ǰ���
    Cleo�ڵ�һ��Ͷ��100��Ԫ��ӯ����5%�õ��� 105 ��Ԫ����һ���ӯ����105��Ԫ��5%��5.25��Ԫ���������ơ�
	���д�����򣬼���������Clco ��Ͷ�ʼ�ֵ���ܳ���Daphne��Ͷ�ʼ�ֵ������ʾ��ʱ�����˵�Ͷ�ʼ�ֵ��                                                           */
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
		cout << "��ʱDaphne��Ͷ�ʼ�ֵ:" << Dapinterest << endl;
		cout << "��ʱCleo��Ͷ�ʼ�ֵ:" << Cleinterest << endl;
	} while (Cleinterest <= Dapinterest);
	cout << count << "���Clco ��Ͷ�ʼ�ֵ���ܳ���Daphne��Ͷ�ʼ�ֵ" << endl;
	cout << "��ʱDaphne��Ͷ�ʼ�ֵ:" << Dapinterest << endl;
	cout << "��ʱCleo��Ͷ�ʼ�ֵ:" << Cleinterest << endl;
	cin.get();
	return 0;

}
//δ�������


/*5.����Ҫ����(C++ ForFools) һ�顣���дһ����������ȫ����ÿ���µ�������(ͼ�����������������۶�). ����ͨ��ѭ����
    ʹ�ó�ʼ��Ϊ�·��ַ�����char *����(��string��������)���½�����ʾ��������������ݴ����ڸ�int �����С�
	Ȼ�󣬳�����������и�Ԫ�ص������� ��������һ������������                                                                                                 */
/*#include<iostream>
#include<string>
using namespace std;
const int Year = 12;
int main()
{
	char* month[Year] = { "January","February","March","April ","May","June","July","August","September","October","November","December " };
	int SalesVolume[Year];
	int i;
	cout << "������ȫ������·ݵ�������:" << endl;
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
	cout << "ȫ�����������:" << sum << endl;
	cin.get();
	return 0;
	
}*/


/*6.��ɱ����ϰ5,����һ��ʹ��һ����ά�������洢����һ 3����ÿ���µ������������򽫱���ÿ���������Լ����������������                                            */
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
		cout << "��ݣ�" << year[i] << "���·�������:" << endl;
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
		cout << year[i] << "��������Ϊ:" << yearnum[i] << endl;
		sum = sum + yearnum[i];
	}
	cout << "�������������:" << sum << endl;
	cin.get();
	return 0;

}*/


/*7.���һ����Ϊcar�Ľṹ�������洢�����й���������Ϣ:������(�洢���ַ������string�����е��ַ���)���������(����)��
    ��дһ���������û�ѯ���ж�������������󣬳���ʹ��new������һ������Ӧ������car�ṹ��ɵĶ�̬���顣
	��������������ʾ�û�����ÿ������������(�����ɶ���������)�������Ϣ��
	��ע�⣬����Ҫ�ر�С�ģ���Ϊ���������ȡ��ֵ���ַ���(�μ���4��).��󣬳�����ʾÿ���ṹ�����ݡ�
	�ó���������������:
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


/*8.��дһ��������ʹ��һ��char�����ѭ����ÿ�ζ�ȡһ�����ʣ�ֱ���û�����doneΪֹ��
    ��󣬸ó���ָ���û������˶��ٸ�����(������done���ڡ�
	�����Ǹó�����������:
    Enter words (to stop, type the word done):
	anteater birthday category dumpster
	envy finagle geometry done for sure
	You entered a total of 7 words .
    ��Ӧ�ڳ����а���ͷ�ļ�cstring,��ʹ�ú���stremp()�����бȽϲ��ԡ�                                                                                          */
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

/*9.��дһ������ǰһ����ϰ�������ĳ��򣬵�ʹ��string����������ַ����顣���ڳ����а���ͷ�ļ�string,��ʹ�ù�ϵ����������бȽϲ��ԡ�                           */
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

/*10.��дһ��ʹ��Ƕ��ѭ���ĳ���Ҫ���û�����һһ��ֵ��ָ��Ҫ��ʾ�����С�
     Ȼ�󣬳�����ʾ��Ӧ�������Ǻţ����е�һ�а���һ���Ǻţ��ڶ��а��������Ǻţ��������ơ�
	 ÿһ�а������ַ��������û�ָ�������������ǺŲ���������£����Ǻ�ǰ����Ͼ�㡣
	 �ó���������������: 
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
