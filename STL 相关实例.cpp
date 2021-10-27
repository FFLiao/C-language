#include<iostream>
#include<vector>
using namespace std;
//int main()
//{
//	int N = 0;
//	int d = 0;
//	int sum = 0;
//	int ret = 0;
//	vector<int> v;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//			cin >> d;
//			v.push_back(d);
//    }
//	for (int i = 0; i < N; i++)
//	{
//		sum = 0;
//		for (int j = i+1; j < N; j++)
//		{
//			sum += v[i] * v[j];
//		}
//		ret += sum;
//	}
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}
#include<string>
//#include<iostream>
//using namespace std;
//int main()           //自己实现的相邻的字母合成一个字母
//{
//	int n,i,j;
//	string s;
//	cin >> n;
//	cin >> s;
//	for (int i = 0; i<s.size(); i++)
//	{
//		j = i + 1;
//		while (s[i] == s[j])
//		{
//			s.erase(j,1);
//			if (j == s.size())
//			{
//				break;
//			}
//		}
//	}
//	cout << s.size() << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n,num=0;
//	int l[10000];
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> l[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i+1; j < n; j++)
//		{
//			for (int m = j + 1; m < n; m++)
//			{
//				if (l[i] + l[j] > l[m] && l[j] + l[m] > l[i] && l[m] + l[i] > l[j])
//				{
//					num++;
//				}
//			}
//		}
//	}
//	cout << num << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a,num=0;
//	cin >> a;
//	for (int i = 1; i <= a; i++)
//	{
//		if (i % 2 == 1)
//		{
//			num++;
//		}
//	}
//	printf("%.10lf", num * 1.0 / a);
//
//	system("pause");
//	return 0;
//}

#include<iostream>    //实现员工随机分配部门； 
using namespace std;
#include<string>
#include<vector>
#include<ctime>
#include<map>
#define CEHUA  0
#define SHEJI  1
#define SHIJUE 2
class Person {
public:
	string m_name;
	int m_monney;
	Person(string name, int monney)
	{
		this->m_name = name;
		this->m_monney = monney;
	}
};
void CreatPerson(vector<Person>& v)
{
		string n = "ABCDEFGHIJ";
		for (int i = 0; i < 10; i++)
		{
			string name = "员工";
			name += n[i];
			int monney = rand() % 10000 + 10000;
			Person p(name, monney);
			v.push_back(p);
		}
		/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
		{
			cout <<it->m_name<<"  " << "工资 : " <<it->m_monney<< endl;

		}*/
}
void SetGroup(vector<Person>& v, multimap<int, Person>& m)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		int ret = rand() % 3;
		m.insert(make_pair(ret,*it));
	}

}
void showPerson(multimap<int,Person>&m)
{
	multimap<int, Person>::iterator it;
	it = m.find(CEHUA);
	int index = m.count(CEHUA);
	int num = 0;
	cout << "---------------------- " << endl;
	cout << "策划部门" << endl << endl;
	for (; it != m.end()&& num<index; it++,num++)
	{
		cout << it->second.m_name << " 工资为: " << it->second.m_monney << endl;
	}
	cout << "---------------------- " << endl;
	it = m.find(SHEJI);
	index = m.count(SHEJI);
	num = 0;
	cout << "设计部门" << endl << endl;
	for (; it != m.end() && num < index; it++, num++)
	{
		cout << it->second.m_name << " 工资为: " << it->second.m_monney << endl;
	}
	cout << "---------------------- " << endl;
	it = m.find(SHIJUE);
	index = m.count(SHIJUE);
	num = 0;
	cout << "视觉部门" << endl << endl;
	for (; it != m.end() && num < index; it++, num++)
	{
		cout << it->second.m_name << " 工资为: " << it->second.m_monney << endl;
	}
	cout << endl;

}
int main()
{
	srand((unsigned int)time(NULL));
	vector<Person> v;
	CreatPerson(v);
	multimap<int, Person> m;
	SetGroup(v,m);
	showPerson(m);
	system("pause");
	return 0;
}