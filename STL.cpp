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
//		string name = "选手";
//		name += n[i];
//		int score = 0;
//		Person p(name, score);
//		v.push_back(p);
//		//cout << name <<" 分数为:"<< score << endl; 测试
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
//		cout << "选手"<<it->m_name <<"分数为:" <<it->m_score<< endl;
//	}
//}
//
//int main()   //1.生成人的属性 ；2.生成每个人；3，给每个人进行打分操作
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
//	stack<int> s;   //           stack 和 queue函数  一个是先进后出 ，进栈出栈） 一个是先进先出 ， 入队出队  ，不停迭代器，不能遍历
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
//	Person p1("廖唯皓", 18);
//	Person p2("老妖怪", 1000);
//	Person p3("苍老师", 40);
//	Person p4("波多野结衣", 30);
//	queue<Person> q;
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	while (!q.empty())
//	{
//		cout << "领头是:" << q.front().m_name << endl;
//		cout << "收尾是:" << q.back().m_name << endl;
//		cout << "一共有多少人:" << q.size() << endl;
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
//	for (list<int>::iterator it = l.begin();it != l.end(); it++)  //这里用 it< l.end() 会报错；
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
//	list<int> l;//默认构造；
//	for (int i = 0; i < 10; i++)
//	{
//		l.push_back(i);
//	}
//	list<int> l2(l); //拷贝构造
//	list<int> l3(l2.begin(), l2.end());//区间构造   //注意list的迭代器不能够实现跳跃式访问（内存只能一个一个找->所以效率低）
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
//    //  可以自定义一个迭代器指针
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
//	//list 不支持 L.at()和L[];  只有front和back
//	cout << a.front() << endl;
//	cout << a.back() << endl;
//	//迭代器不支持随机访问
//	//i++可以i-- ,支持双向 ，只能一个一个加；
//	list<int>::iterator list;
//	list = a.begin();
//	list++;
//	cout << *list << endl;
//
//	// list.reserve（）反转  sort排序
//	cout << endl << endl << endl;
//	PrintList(a);
//	a.reverse();
//	PrintList(a); 
//	//所有不支持随机访问的迭代器都不能用标准算法，但是内部会提供相应函数
//	a.sort();
//	PrintList(a);
//	//可以自定义比较排序，，但是要告诉他排序规则  
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
//	Person p1("廖唯皓",9999,200);
//	Person p2("黄俊豪",100,210);
//	Person p3("盛宇轩",999,400);
//	Person p4("无敌",999,99999);
//	what.push_back(p1);
//	what.push_back(p2);
//	what.push_back(p3);
//	what.push_back(p4);
//   
//	for (list<Person>::iterator it = what.begin(); it != what.end(); it++)
//	{
//		cout << "姓名是: " << it->m_name <<" 年龄是: "<<it->m_age<<" 身高是:"<<it->m_heght << endl;
//
//	} what.sort(myCompare);
//	cout << "--------------------------------" << endl;
//	for (list<Person>::iterator it = what.begin(); it != what.end(); it++)
//	{
//		cout << "姓名是: " << it->m_name << " 年龄是: " << it->m_age << " 身高是:" << it->m_heght << endl;
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
   
	set<int> s;     //set容器只有insert  进行自动排序，，不能输入重复数据；
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