//#include<iostream>
//using namespace std;

//class Person {
//
//public:
//	/*int operator()(int a,int b) {
//		return a + b;
//
//	}*/
//	void operator()(string name) {
//		cout << name << endl;
//		num++;
//	}
//	int num = 0;
//
//};
//void DoPrint(Person& p,string test)   //�º���������Ϊ�������뺯���������ҿ����ں����ڵ��ò�����
//{
//	p(test);
//
//}
//
//int main()
//{
//	Person p;
//	/*int ret = p(20,20); */ //�º�����������ͨ��������������з���ֵ
//	/*cout << ret << endl;*/
//	p("��Ψ�");
//	p("��Ψ�");
//	p("��Ψ�");
//	p("��Ψ�");
//	cout << p.num << endl;  //�º��������������Լ���һЩ״̬
//	string test = "hello C++";
//	DoPrint(p, test);
//
//	system("pause");
//	return 0;
//}
//#include<algorithm>
//#include<vector>
//#include<functional>
//class GreaterFive {
//public:
//	bool operator()(int val)  //һԪν��
//	{
//		return val > 5;
//	}
//};
//
//class compare {
//public:
//	bool operator()(int v1, int v2) //��Ԫν��
//	{
//		return v1 > v2;
//	}
//
//
//};
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	} 
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());  //�ҵ��˷��ص�������û�ҵ��������
//	if (it == v.end())
//	{
//		cout << "û�ҵ���" << endl;
//	}
//	else
//		cout << "���������Ϊ��" << *it << endl;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v2.push_back(i);
//	}
//	sort(v2.begin(), v2.end(), compare());  //sort���������ذ汾
//	for (it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//
//	//   ϵͳ�ṩ�˺ܶ��Դ����ڽ��º������ͣ�
//	//   plus minus mutiplies modulus divides    һԪ�º���->> negate ȡ��
//
//	plus<int> p;
//	int ret = p(10, 30);
//	cout << ret << endl;
//	negate<int> n;
//	cout << n(50) << endl;
//	modulus<int> m;
//	cout << m(20,3) << endl;
//	multiplies<int> mu;
//	cout << mu(20,3) << endl;
//    //  Ҳ����ʹ�������º���
//	cout << plus<int>()(30, 20) << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		v2.push_back(i);
//	}
//	sort(v2.begin(), v2.end(), greater<int>());  //�ڽ��ıȽϷº���  ��������greater �� sort��Դ����ͨ��less<>ʵ�ֵ�
//	for (it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	v2.clear();
//	v2.push_back(true);
//	v2.push_back(false);
//	v2.push_back(true);
//	v2.push_back(false);
//	for (it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	v.resize(v2.size());
//	transform(v2.begin(), v2.end(), v.begin(), logical_not<bool>());   //����    logical�߼�����ת�� �� �ṩ���ڽ��º���
//	for (it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	system("pause");
//	return 0;
//}


//#include<algorithm>
//#include<vector>
//#include<functional>
//
//void test1()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find(v.begin(), v.end(), 2);
//	if (it != v.end())
//	{
//		cout << "�ҵ���" << *it << endl;
//	}
//	else
//		cout << "û�ҵ�" << endl;
//}
//class Person {
//public:
//	string m_name;
//	int m_age;
//	bool operator==(const Person&p ) {
//		if (this->m_name == p.m_name&&this->m_age ==p.m_age)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	Person(string name,int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//};
//void test2()
//{
//	vector<Person> v;
//	Person p1("����", 30);
//	Person p2("����", 20);
//	Person p3("����",50);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	Person p("����",30);
//	vector<Person>::iterator it = find(v.begin(), v.end(), p);  //�Զ���������Ҫ���� "==";
//	if (it != v.end())
//	{
//		cout << "�ҵ���" << it->m_name << endl;
//	}
//	else
//		cout << "û�ҵ�" << endl;
//}
//int main()
//{
//	test2();
//	return 0;
//}


//#include<string>
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//class Person {
//public:
//	string m_name;
//	int m_age;
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	bool operator==(const Person&p) {
//		if (p.m_name == this->m_name && p.m_age == this->m_age)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//};
//class Greater25 {
//public:
//	bool operator()(const Person&p)
//	{
//		return p.m_age < 25;
//	}
//};
//class Down {
//public:
//	bool operator()(int a,int b)
//	{
//		return a > b;
//	}
//
//};
//int main()
//{
//	vector<Person>v;
//	Person p1("�ŷ�", 40);
//	Person p2("���", 30);
//	Person p3("¶��", 20);
//	Person p4("���ʽ�", 20);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	vector<Person>::iterator it = find(v.begin(), v.end(), p1);
//	if (it == v.end())
//	{
//		cout << "û�ҵ�" << endl;
//	}
//	else
//		cout << "�ҵ���"<< it->m_name << endl;
//	it = find_if(v.begin(), v.end(),Greater25());
//	cout << it->m_name << endl;
//
//	int num = count(v.begin(), v.end(), p1);
//	cout << num << endl;
//
//	
//	vector<int> v2;
//	v2.push_back(10);
//	v2.push_back(10);
//	v2.push_back(30);
//	v2.push_back(40);
//	vector<int>::iterator its = adjacent_find(v2.begin(), v2.end());  //���������ظ�Ԫ�أ�
//	cout << *its << endl;
//	sort(v2.begin(), v2.end(),Down());
//	cout << "----------------------------" << endl << endl;;
//	for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	bool ret = binary_search(v2.begin(), v2.end(), 30);
//	
//	system("pause");
//	return 0;
//}  
#include<string>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
class Person {
public:
	string m_name;
	int m_age;
	Person(string name,int age) {
		this->m_age = age;
		this->m_name = name;
	}
	bool operator==(const Person& p1) {
		if (p1.m_age == this->m_age)
		{
			return true;
		}
		else
			return false;
          
	}
};
class compare {
public:
	bool operator()(const Person &p1,const Person &p2) {
		if (p1.m_age == p2.m_age)
		{
			return true;
		}
		else
			return false;

	}

};
class Compare {
public:
	bool operator()(const Person& p1, const Person& p2)
	{
		return p1.m_age < p2.m_age;

	}

};
class Greater25 {
public:
	bool operator()(const Person& p)
	{
		return p.m_age > 25;
	}
};
int main()
{
	vector<Person> v;
	Person p1("���",30);
	Person p2("��ϼ����",20);
	Person p3("����",30);
	Person p4("����",25);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	sort(v.begin(), v.end(), Compare());
	vector<Person>::iterator it = adjacent_find(v.begin(), v.end(), compare());  //���ҵ����������ڵ������Ƿ���ȣ�
	if (it != v.end())
	{
		cout << "�ҵ���" <<it->m_name<< endl;
	}
	else
		cout << "û�ҵ�"<<it->m_name << endl;
	Person p("ǧ��֮��", 30);
	int num = count(v.begin(), v.end(), p);
	cout <<"��ǧ��֮��ͬ����˸�����"<< num << endl;
	int num2 = count_if(v.begin(), v.end(), Greater25());
	cout << "����25������У�" << num2<<endl;
	system("pause");
	return 0;
}

//find , count ��operator����"=="  find_if,count_if �÷º������߱ȽϹ��� binary_search һ�����������У� adjacent_find ����������ͬԪ�أ��ܷ���