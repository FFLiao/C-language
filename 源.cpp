#include<iostream>
using namespace std;
#include<string>
//int main()
//{
//	string str1 = "I Love"; //��ֵ
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
//	string str6;   //׷��
//	str6 += str1;
//	str6 += str5;
//	cout << str6 << endl;
//	string str7 = str1;
//	str7.append(" DNF ");
//	cout << str7 << endl;
//	str7.append("LOL hahaah", 3);
//	cout << str7 << endl;
//	string str9 = "����ǿ ";
//	string str8 = "��ҪAK";
//	str9.append(str8);
//	cout << str9 << endl;
//	string str10 = "�ߺ������~";
//	str10.append(str9,0,13);    //����2 Ϊ���ĸ�λ�ÿ�ʼ�أ�����3ΪҪ��ȡ�����ֽڣ�
//	cout << str10 << endl;
//
//	//  ���Һ��滻 
//	string s1 = "I Love zhangzifeng";  //����string�е�ĳ�ַ����±�����find ��������,rfind ��������
//	int ret = s1.find("v");              //�������Ӵ�  ���ص�һ���ַ����±ꣻ
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
//	ret = s2.find("liao wei hao");    //find�����Ӵ��Ļ��᷵��-1;
//	if (ret == -1) {
//		cout << "��Ψ𩲻����!" << endl;
//	}
//	string s3 = "wo qu ni ma de";   //���Һ��滻�ľ�����ϵ��ʹ�÷�����
//	int ret2 = s3.find("n");
//	s3.replace(ret2, 2, "wahahaha");
//	cout << s3 << endl;
//
//	//�ַ����ıȽ�  ����˳����ַ���ascllֵ���ӵ�һ����ʼ���αȽ�;  ��Ҫ���ж������ַ����Ƿ����!;
//	string a1 = "wo de hen da";
//	string a2 = "ni yao ren yi xia";
//	if (a1.compare(a2) > 0)
//	{
//		cout << "a1��a2��" << endl;
//	}
//	else if (a1.compare(a2) == 0)
//	{
//		cout << "���Ƕ�һ��!" << endl;
//	}
//	else
//		cout << "a1������!" << endl;
//
//	//�ַ����Ĵ�ȡ(���ַ�ʽ)
//	string f = "yi ge ren de ye";  //���ַ�ʽȡ�����飻f[],f.at();
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
//	string l = "kan ta ma de";  //�����ɾ��  insert�� erase ���Խ��findʹ�ã�
//	l.insert(0, "wo yao ");
//	cout << l << endl;
//	int ret3 = l.find("de");
//	l.erase(ret3, 2);
//	cout << l << endl;
//
//	//�Ӵ��Ļ�ȡ   substr �������� [a,b)����ҿ� ��ȡ��Χ  ���ǿ��Ժ�find����ã� ��B��������������ã�
//	string gan = "ni yao tiao wu ma ?";
//	string gan2 = gan.substr(0, 2);
//	cout << gan2 << endl;
//	int ret4 = gan.find("tiao");
//	gan2 = gan.substr(ret4, 4);
//	cout << gan2 << endl;
//	//  ʵ����;����
//	string email = "2021211920@stu.edu.cn";
//	int ret5 = email.find('@');   //��˵һ�� �� find������Զ����!!!!!!!!!
//	string xuehao = email.substr(0, ret5);
//	cout << xuehao << endl;
//
//	return 0;
//} //string ���͵ĸ����ع�������   assign,append,find,rfind,substr,erase,insert,replace,at,compare;


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
//	vector<int> v2;   //ֱ�Ӹ�ֵ
//	v2 = v;
//	PrintVector(v2);
//	v2.assign(v.begin(),v.end());  //assign��ֵ��
//
//	if (v.empty()) {        //vector's capacity ,size ,empty,resize; 
//		cout << "vectorΪ��" << endl;
//	}
//	else
//	{
//		cout << "vector��Ϊ��" << endl;
//	}
//	cout << "vector������Ϊ��  " << v.capacity() << endl;
//	cout << "vectord�ĳ���Ϊ��  " << v.size() << endl;
//	v.resize(15);
//	PrintVector(v);
//	v.resize(5);
//	PrintVector(v);
//
//	// β�壬βɾ�����룬ɾ������գ�
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
//    //vector�Ĵ�ȡ  ��at��[]��front(��ȡ��һ��Ԫ��) ��back(��ȡ���һ��Ԫ��)��
//	vector<int> n;
//	for (int i = 0; i < 3; i++)
//	{
//		n.push_back(i);
//	}
//	for (int i = 0; i < n.size(); i++)  // ?Ϊʲô����forѭ���� Ҫ�õ�����������
//	{
//		cout << n.at(i)<<" ";
//	}
//	cout << endl;
//	cout << "��һ��Ԫ��Ϊ�� " << n.front() << endl;
//	cout << "���һ��Ԫ��Ϊ�� " << n.back() << endl;
//
//
//	 //  swap ��ʹ��  ��  ʵ����;   ��������������������������ʹ�ú��ڵ�ǰ�л��ͷţ��ﵽ�ڴ�����
//	vector<int> o;
//	for (int i = 0; i < 1000000; i++)
//	{
//		o.push_back(i);
//	}
//	cout << "����������Ϊ��" << o.capacity() << endl;
//	cout << "�����Ĵ�С��" << o.size() << endl;
//	o.resize(3);
//	cout << "����������Ϊ��" << o.capacity() << endl;
//	cout << "�����Ĵ�С��" << o.size() << endl;
//	vector<int>(o).swap(o);  
//	cout << "����������Ϊ��" << o.capacity() << endl;
//	cout << "�����Ĵ�С��" << o.size() << endl;
//
//	vector<int> h;   //����reserve ����vector��Ԥ���ռ䣬������չ������ ���ǲ��ܷ�����Щ�ռ䣬��resize�ĸ���Ĭ��ֵ������
//	int* p = NULL;
//	int num = 0;
//	h.reserve(1000000);   //Ԥ���ռ�
//	for (int i = 0; i < 1000000; i++)
//	{
//		h.push_back(i);
//		if (p != &h[0]) {
//			p = &h[0];
//			num++;
//		}
//	}
//	cout << "����չ����Ϊ�� " << num << endl;
//	system("pause");
//	return 0;
//} ///vector ���ع�����

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
	deque<int> v;  //Ĭ�Ϲ���
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	PrintDeque(v);  
	deque<int>v2(v);   //��������
	deque<int>v3(v2.begin()+3, v2.end());  //���乹��
	PrintDeque(v2);
	PrintDeque(v3);
	deque<int>v4;
	v4 = v3;  //operator=��ֵ��
	deque<int>v5;
	v5.assign(v3.begin(), v3.end());  //assign ��ֵ  
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
		cout << "��Ϊ��" << endl;
		cout << d.size() << endl;
	}
	d.resize(15,0);
	PrintDeque(d);
	//deque<int>(d).swap(d);   deque �����в�����������һ���ƣ� 

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
	sort(d.begin(), d.end());   //�Կ���������ʵĵ��������Խ������� �� ���� vector ��
	PrintDeque(d);
	system("pause");
	return 0;
}