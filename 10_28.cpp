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
//void DoPrint(Person& p,string test)   //仿函数可以作为参数传入函数，，并且可以在函数内调用参数；
//{
//	p(test);
//
//}
//
//int main()
//{
//	Person p;
//	/*int ret = p(20,20); */ //仿函数可类似普通函数传入参数，有返回值
//	/*cout << ret << endl;*/
//	p("廖唯皓");
//	p("廖唯皓");
//	p("廖唯皓");
//	p("廖唯皓");
//	cout << p.num << endl;  //仿函数可在类内有自己的一些状态
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
//	bool operator()(int val)  //一元谓词
//	{
//		return val > 5;
//	}
//};
//
//class compare {
//public:
//	bool operator()(int v1, int v2) //二元谓词
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
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());  //找到了返回迭代器，没找到返回最后
//	if (it == v.end())
//	{
//		cout << "没找到！" << endl;
//	}
//	else
//		cout << "大于五的数为：" << *it << endl;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v2.push_back(i);
//	}
//	sort(v2.begin(), v2.end(), compare());  //sort有两种重载版本
//	for (it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//
//	//   系统提供了很多自带的内建仿函数类型：
//	//   plus minus mutiplies modulus divides    一元仿函数->> negate 取反
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
//    //  也可以使用匿名仿函数
//	cout << plus<int>()(30, 20) << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		v2.push_back(i);
//	}
//	sort(v2.begin(), v2.end(), greater<int>());  //内建的比较仿函数  ，，常用greater ， sort的源码是通过less<>实现的
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
//	transform(v2.begin(), v2.end(), v.begin(), logical_not<bool>());   //搬运    logical逻辑符的转换 ， 提供的内建仿函数
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
//		cout << "找到了" << *it << endl;
//	}
//	else
//		cout << "没找到" << endl;
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
//	Person p1("张三", 30);
//	Person p2("李四", 20);
//	Person p3("王五",50);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	Person p("张三",30);
//	vector<Person>::iterator it = find(v.begin(), v.end(), p);  //自定义类型需要重载 "==";
//	if (it != v.end())
//	{
//		cout << "找到了" << it->m_name << endl;
//	}
//	else
//		cout << "没找到" << endl;
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
//	Person p1("张飞", 40);
//	Person p2("李白", 30);
//	Person p3("露娜", 20);
//	Person p4("狄仁杰", 20);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	vector<Person>::iterator it = find(v.begin(), v.end(), p1);
//	if (it == v.end())
//	{
//		cout << "没找到" << endl;
//	}
//	else
//		cout << "找到了"<< it->m_name << endl;
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
//	vector<int>::iterator its = adjacent_find(v2.begin(), v2.end());  //查找相邻重复元素；
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
	Person p1("李白",30);
	Person p2("紫霞仙子",20);
	Person p3("韩信",30);
	Person p4("至尊宝",25);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	sort(v.begin(), v.end(), Compare());
	vector<Person>::iterator it = adjacent_find(v.begin(), v.end(), compare());  //查找的是两个相邻的年龄是否相等；
	if (it != v.end())
	{
		cout << "找到了" <<it->m_name<< endl;
	}
	else
		cout << "没找到"<<it->m_name << endl;
	Person p("千年之狐", 30);
	int num = count(v.begin(), v.end(), p);
	cout <<"与千年之狐同岁的人个数："<< num << endl;
	int num2 = count_if(v.begin(), v.end(), Greater25());
	cout << "大于25岁的人有：" << num2<<endl;
	system("pause");
	return 0;
}

//find , count 用operator重载"=="  find_if,count_if 用仿函数告诉比较规则； binary_search 一定是有序数列； adjacent_find 查找相邻相同元素，很方便