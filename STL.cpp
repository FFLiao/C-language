//#include<iostream>
//using namespace std;
#include<string>
#include<deque>
#include<vector>
#include<ctime>
#include<algorithm>
//class Person
//{
//public: string m_name;
//	  int m_score;
//	  Person(string name, int score)
//	  {
//		  this->m_name = name;
//		  this->m_score = score;
//	  }
//
//};
//
//void creatPerson(vector<Person>& v)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		string n = "ABCDE";
//		string name = "ѡ��";
//		name += n[i];
//		int score = 0;
//		Person p(name, score);
//		v.push_back(p);
//		//cout << name <<" ����Ϊ:"<< score << endl; ����
//	}
//}
//void giveScore(deque<int>& d,vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it < v.end(); it++) {
//		for (int i = 0; i < 10; i++)
//		{
//			int ret = rand() % 40 + 61;
//			d.push_back(ret);
//		}
//		sort(d.begin(), d.end());
//		d.pop_back();
//		d.pop_front();
//		int num = 0;
//		for (deque<int>::iterator div = d.begin(); div < d.end(); div++)
//		{
//			num += *div;
//		}
//		num /= 8;
//		it->m_score = num;
//		d.clear();
//	}
//		
//}
//void show(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it < v.end(); it++)
//	{
//
//		cout << "ѡ��"<<it->m_name <<"����Ϊ:" <<it->m_score<< endl;
//	}
//}
//
//int main()   //1.�����˵����� ��2.����ÿ���ˣ�3����ÿ���˽��д�ֲ���
//{
//	srand((unsigned int)time(NULL));
//	vector<Person> v;
//	creatPerson(v);
//	deque<int> d;
//	giveScore(d,v);
//	show(v);
//	system("pause");
//	return 0;
//} // 


//#include<stack>
//#include<queue>
//
//class Person {
//public:
//	string m_name;
//	int m_age;
//
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//};
//int main()
//{ 
//	stack<int> s;   //           stack �� queue����  һ�����Ƚ���� ����ջ��ջ�� һ�����Ƚ��ȳ� �� ��ӳ���  ����ͣ�����������ܱ���
//	for (int i = 0; i < 10; i++)
//	{
//		s.push(i);
//	}
//	int ret = s.size();
//	cout << ret << endl;
//	s.pop();
//	int ret2 = s.size();
//	cout << ret2 << endl;
//	int r = s.top();
//	cout << r << endl;
//	while (!s.empty())
//	{
//		s.pop();
//	}
//
//	Person p1("��Ψ�", 18);
//	Person p2("������", 1000);
//	Person p3("����ʦ", 40);
//	Person p4("����Ұ����", 30);
//	queue<Person> q;
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	while (!q.empty())
//	{
//		cout << "��ͷ��:" << q.front().m_name << endl;
//		cout << "��β��:" << q.back().m_name << endl;
//		cout << "һ���ж�����:" << q.size() << endl;
//		q.pop();
//	}
//
//	system("pause");
//	return 0;
//}

//#include<algorithm>
//#include<list>
//void PrintList(list<int>& l)
//{
//	for (list<int>::iterator it = l.begin();it != l.end(); it++)  //������ it< l.end() �ᱨ��
//	{
//		cout << *it<<" ";
//	}
//	cout << endl;
//}
//
//bool myCompare(int v1 ,int v2)
//{
//	return v1 > v2;
//}
//
//int main()    //empty ,size ,resize,operator,assign,swap
//{    
//	list<int> l;//Ĭ�Ϲ��죻
//	for (int i = 0; i < 10; i++)
//	{
//		l.push_back(i);
//	}
//	list<int> l2(l); //��������
//	list<int> l3(l2.begin(), l2.end());//���乹��   //ע��list�ĵ��������ܹ�ʵ����Ծʽ���ʣ��ڴ�ֻ��һ��һ����->����Ч�ʵͣ�
//	PrintList(l);
//	PrintList(l2);
//	PrintList(l3);
//
//	if (l.empty())
//	{
//		cout << "kong" << endl;
//	}else
//		cout << "bushikong" << endl;
//	cout << l.size() << endl;
//	l.resize(20);
//	PrintList(l);
//	l.resize(2);
//	PrintList(l);
//	list<int> n;
//	n = l;
//	n.assign(l.begin(),l.end());
//	n.assign(10, 100);
//	PrintList(n);
//
//
//
//	//push_back;push_front;pop_back;pop_front;insert;erase;clear;remove;
//    //  �����Զ���һ��������ָ��
//
//	list<int>::iterator it;
//
//	list<int> a;
//	a = n;
//	it = a.begin();
//	it++;
//	a.insert(it, 1000000);
//	PrintList(a);
//	a.insert(++it, 10, 555);
//	PrintList(a);
//	a.erase(++it);
//	PrintList(a);
//	a.remove(555);
//	PrintList(a);
//	/*a.clear();*/
//	//list ��֧�� L.at()��L[];  ֻ��front��back
//	cout << a.front() << endl;
//	cout << a.back() << endl;
//	//��������֧���������
//	//i++����i-- ,֧��˫�� ��ֻ��һ��һ���ӣ�
//	list<int>::iterator list;
//	list = a.begin();
//	list++;
//	cout << *list << endl;
//
//	// list.reserve������ת  sort����
//	cout << endl << endl << endl;
//	PrintList(a);
//	a.reverse();
//	PrintList(a); 
//	//���в�֧��������ʵĵ������������ñ�׼�㷨�������ڲ����ṩ��Ӧ����
//	a.sort();
//	PrintList(a);
//	//�����Զ���Ƚ����򣬣�����Ҫ�������������  
//	a.sort(myCompare);
//	PrintList(a);
//
//
//	system("pause");
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#include<list>
//#include<iterator>
//#include<algorithm>
//class Person {
//public:
//	string m_name;
//	int m_age;
//	int m_heght;
//	Person(string name,int age,int heght) {
//		this->m_name = name;
//		this->m_age = age;
//		this->m_heght = heght;
//	}
//
//};
//
//bool myCompare(Person &v1,Person &v2)
//{
//	if (v1.m_age == v2.m_age)
//	{
//		return v1.m_heght > v2.m_heght;
//	}
//	else
//		return v1.m_age < v2.m_age;
//
//}
//int main()
//{
//	/*vector<Person> list;*/
//	list<Person> what;
//
//
//
//	Person p1("��Ψ�",9999,200);
//	Person p2("�ƿ���",100,210);
//	Person p3("ʢ����",999,400);
//	Person p4("�޵�",999,99999);
//	what.push_back(p1);
//	what.push_back(p2);
//	what.push_back(p3);
//	what.push_back(p4);
//   
//	for (list<Person>::iterator it = what.begin(); it != what.end(); it++)
//	{
//		cout << "������: " << it->m_name <<" ������: "<<it->m_age<<" �����:"<<it->m_heght << endl;
//
//	} what.sort(myCompare);
//	cout << "--------------------------------" << endl;
//	for (list<Person>::iterator it = what.begin(); it != what.end(); it++)
//	{
//		cout << "������: " << it->m_name << " ������: " << it->m_age << " �����:" << it->m_heght << endl;
//
//	}
//     
//	system("pause");
//	return 0;
//}


#include<iostream>
using namespace std;
#include<set>

void PrintSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}cout << endl;
}

int main(){
   
	set<int> s;     //set����ֻ��insert  �����Զ����򣬣����������ظ����ݣ�
	s.insert(20);
	s.insert(30);
	s.insert(10);
	s.insert(50);
	s.insert(40);
	PrintSet(s);
	set<int>s2(s);
	PrintSet(s);
	system("pause");
	return 0;   
}