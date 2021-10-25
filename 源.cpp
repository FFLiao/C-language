#include<iostream>
using namespace std;
#include<string>
//int main()
//{
//	string str1 = "I Love"; //赋值
//	string str2 = str1;
//	cout << str2 << endl;
//	string str3(str1);
//	cout << str3 << endl;
//	string str4;
//	str4.assign(str3);
//	string str5;
//	str5.assign("hello world", 5);
//	cout << str5 << endl;
//
//	string str6;   //追加
//	str6 += str1;
//	str6 += str5;
//	cout << str6 << endl;
//	string str7 = str1;
//	str7.append(" DNF ");
//	cout << str7 << endl;
//	str7.append("LOL hahaah", 3);
//	cout << str7 << endl;
//	string str9 = "我最强 ";
//	string str8 = "我要AK";
//	str9.append(str8);
//	cout << str9 << endl;
//	string str10 = "芜湖！起飞~";
//	str10.append(str9,0,13);    //参数2 为从哪个位置开始截，参数3为要截取几个字节；
//	cout << str10 << endl;
//
//	//  查找和替换 
//	string s1 = "I Love zhangzifeng";  //查找string中的某字符的下标数；find 从左往右,rfind 从右往左
//	int ret = s1.find("v");              //可以找子串  返回第一个字符的下标；
//	cout << ret << endl;
//	ret = s1.rfind("v");
//	cout << ret << endl;
//	string s2 = "yingyuke,yishenzhidi";
//	ret = s2.find("y");
//	cout << ret << endl;
//	ret = s2.rfind("y");
//	cout << ret << endl;
//	ret = s2.find("yishenzhidi");
//	cout << ret << endl;
//	ret = s2.find("liao wei hao");    //find不到子串的话会返回-1;
//	if (ret == -1) {
//		cout << "廖唯皓不存在!" << endl;
//	}
//	string s3 = "wo qu ni ma de";   //查找和替换的具体联系，使用方法；
//	int ret2 = s3.find("n");
//	s3.replace(ret2, 2, "wahahaha");
//	cout << s3 << endl;
//
//	//字符串的比较  ，按顺序比字符的ascll值，从第一个开始依次比较;  主要是判断两个字符串是否相等!;
//	string a1 = "wo de hen da";
//	string a2 = "ni yao ren yi xia";
//	if (a1.compare(a2) > 0)
//	{
//		cout << "a1比a2大！" << endl;
//	}
//	else if (a1.compare(a2) == 0)
//	{
//		cout << "我们都一样!" << endl;
//	}
//	else
//		cout << "a1他不行!" << endl;
//
//	//字符串的存取(两种方式)
//	string f = "yi ge ren de ye";  //两种方式取出数组；f[],f.at();
//	for (int i = 0; i < f.size(); i++)
//	{
//		cout << f[i];
//	}
//	cout << endl;
//	for (int i = 0; i < f.size(); i++)
//	{
//		cout << f.at(i);
//	}
//	cout << endl;
//	f[0] = 'x';
//	f.at(1) = 'o';
//	cout << f << endl;
//
//
//
//	string l = "kan ta ma de";  //插入和删除  insert， erase 可以结合find使用；
//	l.insert(0, "wo yao ");
//	cout << l << endl;
//	int ret3 = l.find("de");
//	l.erase(ret3, 2);
//	cout << l << endl;
//
//	//子串的获取   substr 两个参数 [a,b)左闭右开 截取范围  还是可以和find结合用， 这B函数是真他妈好用；
//	string gan = "ni yao tiao wu ma ?";
//	string gan2 = gan.substr(0, 2);
//	cout << gan2 << endl;
//	int ret4 = gan.find("tiao");
//	gan2 = gan.substr(ret4, 4);
//	cout << gan2 << endl;
//	//  实际用途案例
//	string email = "2021211920@stu.edu.cn";
//	int ret5 = email.find('@');   //再说一次 ， find函数永远的神!!!!!!!!!
//	string xuehao = email.substr(0, ret5);
//	cout << xuehao << endl;
//
//	return 0;
//} //string 类型的各种重构函数；   assign,append,find,rfind,substr,erase,insert,replace,at,compare;


#include<vector>

//void PrintVector(vector<int> v)
//{
//	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++) 
//	{
//		v.push_back(i);
//	}
//	PrintVector(v);
//	vector<int> v2;   //直接赋值
//	v2 = v;
//	PrintVector(v2);
//	v2.assign(v.begin(),v.end());  //assign赋值；
//
//	if (v.empty()) {        //vector's capacity ,size ,empty,resize; 
//		cout << "vector为空" << endl;
//	}
//	else
//	{
//		cout << "vector不为空" << endl;
//	}
//	cout << "vector的容量为：  " << v.capacity() << endl;
//	cout << "vectord的长度为：  " << v.size() << endl;
//	v.resize(15);
//	PrintVector(v);
//	v.resize(5);
//	PrintVector(v);
//
//	// 尾插，尾删，插入，删除，清空；
//	vector<int>vv;
//	for (int i = 0; i < 5; i++)
//	{
//		vv.push_back(i+3);
//	}
//	PrintVector(vv);
//	vv.pop_back();
//	PrintVector(vv);
//	vv.insert(vv.begin(), 2, 1000);
//	PrintVector(vv);
//	vv.erase(vv.begin());
//	PrintVector(vv);
//	vv.erase(vv.begin(), vv.end());
//	PrintVector(vv);
//
//
//    //vector的存取  ，at，[]，front(读取第一个元素) ，back(读取最后一个元素)；
//	vector<int> n;
//	for (int i = 0; i < 3; i++)
//	{
//		n.push_back(i);
//	}
//	for (int i = 0; i < n.size(); i++)  // ?为什么不用for循环》 要用迭代器遍历？
//	{
//		cout << n.at(i)<<" ";
//	}
//	cout << endl;
//	cout << "第一个元素为： " << n.front() << endl;
//	cout << "最后一个元素为： " << n.back() << endl;
//
//
//	 //  swap 的使用  和  实际用途   利用匿名容器交换，匿名容器使用后在当前行会释放；达到内存收缩
//	vector<int> o;
//	for (int i = 0; i < 1000000; i++)
//	{
//		o.push_back(i);
//	}
//	cout << "容器的容量为：" << o.capacity() << endl;
//	cout << "容器的大小：" << o.size() << endl;
//	o.resize(3);
//	cout << "容器的容量为：" << o.capacity() << endl;
//	cout << "容器的大小：" << o.size() << endl;
//	vector<int>(o).swap(o);  
//	cout << "容器的容量为：" << o.capacity() << endl;
//	cout << "容器的大小：" << o.size() << endl;
//
//	vector<int> h;   //利用reserve 进行vector的预留空间，减少扩展次数； 但是不能访问这些空间，与resize的赋给默认值有区别；
//	int* p = NULL;
//	int num = 0;
//	h.reserve(1000000);   //预留空间
//	for (int i = 0; i < 1000000; i++)
//	{
//		h.push_back(i);
//		if (p != &h[0]) {
//			p = &h[0];
//			num++;
//		}
//	}
//	cout << "总扩展次数为： " << num << endl;
//	system("pause");
//	return 0;
//} ///vector 的重构函数

#include<deque>
#include<algorithm>
void PrintDeque(const deque<int> &v)
{
	for (deque<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it <<" ";
	}
	cout << endl;
}

int main()
{
	deque<int> v;  //默认构造
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	PrintDeque(v);  
	deque<int>v2(v);   //拷贝构造
	deque<int>v3(v2.begin()+3, v2.end());  //区间构造
	PrintDeque(v2);
	PrintDeque(v3);
	deque<int>v4;
	v4 = v3;  //operator=赋值；
	deque<int>v5;
	v5.assign(v3.begin(), v3.end());  //assign 赋值  
	v5.assign(10, 100);
	PrintDeque(v5);

	deque<int>d;
	d = v;
	if (d.empty())
	{
		cout << "empty" << endl;
	}
	else
	{
		cout << "不为空" << endl;
		cout << d.size() << endl;
	}
	d.resize(15,0);
	PrintDeque(d);
	//deque<int>(d).swap(d);   deque 容器中不存在容量这一限制； 

	d.pop_back();
	d.push_front(6);
	d.push_front(7);
	d.pop_front();
	PrintDeque(d);
	d.insert(d.begin(), 2, 1000);
	deque<int>d2;
	d2.push_back(5);
	d2.push_back(5);
	d2.push_back(5);
	d.insert(d.begin()+5,d2.begin(),d2.end());
	PrintDeque(d);
	/*d.erase(d.begin()+1, d.end());
	PrintDeque(d);
	d.clear();
	PrintDeque(d);*/

	cout << d.front() << endl;
	cout << d.back() << endl;
	sort(d.begin(), d.end());   //对可以随机访问的迭代器可以进行排序 ， 还有 vector ；
	PrintDeque(d);
	system("pause");
	return 0;
}