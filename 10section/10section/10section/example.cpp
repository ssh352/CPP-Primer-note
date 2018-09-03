#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib> // ����main������������EXIT_FAILURE��EXIT_SUCCESS
#include <cassert> // ����assert
#include <fstream>
#include <sstream>
#include <list>
#include <array>
#include <deque>
#include <forward_list>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <functional>
#include "Sales_item.h"
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
using std::iostream;
using std::istream;
using std::ostream;
using std::flush;
using std::ends;
using std::unitbuf;
using std::nounitbuf;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::stringstream;
using std::istringstream;
using std::ostringstream;
using std::list;
using std::deque;
using std::array;
using std::forward_list;
using std::to_string;
using std::stack;
using std::queue;
using std::stoi;
using std::stol;
using std::stoll;
using std::stold;
using std::stod;
using std::stof;
using std::stoul;
using std::stoull;
using std::find;
using std::placeholders::_1;
using std::istream_iterator;
using std::ostream_iterator;
using namespace std::placeholders;

typedef string::size_type sz;

// 10.1 ����
void ex01()
{
#pragma region ����
	//vector<int> vec;

	//int val = 42; // ���ǽ����ҵ�ֵ
	//// �����vec���ҵ���Ҫ��Ԫ�أ��򷵻ؽ��ָ���������򷵻ؽ��Ϊvec.cend()
	//auto result = find(vec.cbegin(), vec.cend(), val);
	//// ������
	//cout << "The value " << val
	//	<< (result == vec.end()
	//		? " is not present" : " is present") << endl;

	//vector<string> lst;

	//string val = "a value"; // ����Ҫ���ҵ�ֵ
	//// �˵�����list�в���stringԪ��
	//auto result = find(lst.cbegin(), lst.cend(), val);

	/*int ia[] = { 27,210,12,47,109,83 };
	int val = 83;
	int *result = find(begin(ia), end(ia), val);
	cout << *result << endl;*/
#pragma endregion
}

void elimDups(vector<string> &words)
{
	// ���ֵ�������words���Ա�����ظ�����
	sort(words.begin(), words.end());
	// unique�������뷶Χ��ʹ��ÿ������ֻ����һ��
	// �����ڷ�Χ��ǰ��������ָ���ظ�����֮��һ��λ�õĵ�����
	vector<string>::iterator end_unique = std::unique(words.begin(), words.end());
	// ʹ����������eraseɾ���ظ�����
	words.erase(end_unique, words.end());
}

// 10.2 ��ʶ�����㷨
void ex02()
{
#pragma region ֻ���㷨

	//vector<int> vec;
	//// ��vec�е�Ԫ����ͣ��͵ĳ�ֵ��0
	//int sum = accumulate(vec.cbegin(), vec.cend(), 0.0);

	//vector<string> v;
	//string sum = accumulate(v.cbegin(), v.cend(), string(""));
	//// ����const char*��û�ж���+�����
	//string sum = accumulate(v.begin(), v.end(), "");

	/*string str = "haha";
	const char *chs = "haha";
	cout << (chs  == str) << endl;*/

	// roster2�е�Ԫ����ĿӦ��������roster1һ����
	// roster1��vector<string>ʱ��roster2������list<const char*>
	//equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
#pragma endregion

#pragma region д�������㷨
	//std::fill(vec.begin(), vec.end(), 0); // ��ÿ��Ԫ������Ϊ0
	//// ��������һ������������Ϊ10
	//std::fill(vec.begin(), vec.begin() + vec.size() / 2, 10);

	//vector<int> vec; // ��vector
	//// ʹ��vec����������ֵͬ
	//std::fill_n(vec.begin(), vec.size(), 0); // ������Ԫ������Ϊ0
	//fill_n(dest, n, val);

	//vector<int> vec; // ������
	//// ���ѣ��޸�vec�е�10��(������)Ԫ��
	//std::fill_n(vec.begin(), 10, 0);

	//vector<int> vec; // ������
	//std::back_insert_iterator<vector<int>> it = std::back_inserter(vec); // ͨ������ֵ�ὫԪ����ӵ�vec��
	//*it = 42; // vec��������һ��Ԫ�أ�ֵΪ42

	//vector<int> vec; // ������
	//// ��ȷ��back_inserter����һ���������������������vec���Ԫ��
	//std::fill_n(std::back_inserter(vec), 10, 0);

	//int a1[] = { 0,1,2,3,4,5,6,7,8,9 };
	//int a2[sizeof(a1) / sizeof(*a1)]; // a2��a1��Сһ��
	//// retָ�򿽱���a2��βԪ��֮���λ��
	//auto ret = std::copy(begin(a1), end(a1), a2); // ��a1�����ݿ�����a2

	//list<int>	ilst{ 0,1,3,4 };
	//vector<int> ivec;
	//// ʹ��back_inserter����Ҫ����Ŀ������
	//replace_copy(ilst.cbegin(), ilst.cend(), back_inserter(ivec), 0, 42);
#pragma endregion

#pragma region ��������Ԫ�ص��㷨
	vector<string> svec = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	elimDups(svec);
	for (auto var : svec)
	{
		cout << var << " ";
	}
	cout << endl;
#pragma endregion
}

// �ȽϺ������������������򵥴�
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

bool lagerThan5(string str, size_t sz)
{
	return str.size() >= sz;
}

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words); // ��words���ֵ�������ɾ���ظ�����
	// ���������򣬳�����ͬ�ĵ���ά���ֵ���
	std::stable_sort(words.begin(), words.end(),
		[](const string &a, const string &b)
	{
		return a.size() < b.size();
	});
	// ��ȡһ����������ָ���һ����סsize()>=sz��Ԫ��
	/*auto wc = std::find_if(words.begin(), words.end(),
		[sz](const string &a)
		{
		return a.size() > sz;
		});*/
	// szΪ��ʽ����ֵ����ʽ
	/*wc = std::find_if(words.begin(), words.end(),
		[=](const string &s)
		{return s.size() >= sz; });*/
	auto wc = std::find_if(words.begin(), words.end(),
		bind(check_size, std::placeholders::_1, sz));
	// ����������size>=sz��Ԫ�ص���Ŀ
	auto count = words.end() - wc;
	// ��ӡ���ȴ��ڵ��ڸ���ֵ�ĵ��ʣ�ÿ�����ʺ����һ���ո�
	std::for_each(wc, words.end(),
		[](const string &s)
	{
		cout << s << " ";
	});
}

void fcn1()
{
	size_t v1 = 42; // �ֲ�����
	// ��v1��������Ϊf�Ŀɵ��ö���
	auto f = [v1] { return v1; };
	v1 = 0;
	auto j = f(); // jΪ42��f���������Ǵ�����ʱv1�Ŀ���
	cout << j << endl;
}

void fcn2()
{
	size_t v1 = 42; // �ֲ�����
	// ����f2����v1������
	auto f2 = [&v1] { return v1; };
	v1 = 0;
	auto j = f2(); // jΪ0��f2����v1�����ã����ǿ���
	cout << j << endl;
}

//void biggies(vector<string> &words,
//	vector<string>::size_type sz,
//	ostream &os = cout, char c = ' ')
//{
//	// ��֮ǰ����һ��������words�Ĵ���
//	// ��ӡcount������Ϊ��ӡ��os
//	std::for_each(words.begin(), words.end(),
//		[&os, c](const string &s) {os << s << c; });
//}

void biggies(vector<string> &words,
	vector<string>::size_type sz,
	ostream &os, char c = ' ')
{
	// ����������ǰ��һ��
	// os��ʽ�������ò���ʽ��c��ʽ����ֵ����ʽ
	std::for_each(words.begin(), words.end(),
		[&, c](const string &s) {os << s << c; });
	// os��ʽ�������ò���ʽ��c��ʽ����ֵ����ʽ
	std::for_each(words.begin(), words.end(),
		[=, &os](const string &s) {os << s << c; });
}

void fcn3()
{
	size_t v1 = 42; // �ֲ�����
	// f���Ըı���������ı�����ֵ
	auto f = [v1]()mutable {return ++v1; };
	v1 = 0;
	auto j = f(); // jΪ43
}

void fcn4()
{
	size_t v1 = 42; // �ֲ�����
	// v1��һ����const����������
	// ����ͨ��f2�е��������ı���
	auto f2 = [&v1] {return ++v1; };
	v1 = 0;
	auto j = f2(); // jΪ1
}

void print(ostream &os, const string &s, char c)
{
	os << s << c;
}

// 10.3 ���Ʋ���
void ex03()
{
	//vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	//// �������ɶ���������
	//sort(words.begin(), words.end(), isShorter);
	//for (auto &var : words)
	//{
	//	cout << var << " ";
	//}
	//cout << endl;

	//vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	//elimDups(words); // ��word���ֵ������ţ��������ظ�����
	//// �������������򣬳�����ͬ�ĵ���ά���ֵ���
	//std::stable_sort(words.begin(), words.end(), isShorter);
	//for (const auto &s : words)
	//	cout << s << " ";
	//cout << endl;

	/*vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	biggies(words, 5);*/

	/*auto f = [] {int i = 10; int j = 20; return i + j; };
	cout << f() << endl;*/


	/*vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	biggies(words, 5);*/
	/*std::stable_sort(words.begin(), words.end(), [](const string &a, const string &b)
	{
	return a.size() < b.size();
	});
	std::for_each(words.begin(), words.end(), [](string s) {cout << s << " "; });*/

	//fcn1();
	//fcn2();
	//vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };

	//vector<int> vi;
	//std::transform(vi.begin(), vi.end(), vi.begin(),
	//	[](int i) {return i < 0 ? -i : i; });
	//// ���󣺲����ƶ�lambda�ķ�������
	//// ���ﵱȻ�����ƶ�...
	//std::transform(vi.begin(), vi.end(), vi.begin(),
	//	[](int i) {if (i < 0) return -i; else return i; });

	//std::transform(vi.begin(), vi.end(), vi.begin(),
	//	[](int i)->int
	//{if (i < 0) return -i; else return i; });

	// check6��һ���ɵ��ö��󣬽���һ��string���͵Ĳ���
	// ���ô�string��ֵ6������check_size
	//auto check6 = bind(check_size, std::placeholders::_1, 6);
	//string s = "hello";
	//bool b1 = check6(s); // check6(s)�����check_szie(s, 6);

	//vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	//biggies(words, 5);

	//// �����ʳ����ɶ���������
	//sort(words.begin(), words.end(), isShorter);
	//// �����ʳ����ɳ���������
	//sort(words.begin(), words.end(), bind(isShorter, _2, _1));

	//auto &os = cout;
	//char c;
	//// os��һ���ֲ�����������һ�������
	//// c��һ���ֲ�����������Ϊchar
	//std::for_each(words.begin(), words.end(),
	//	[&os, c](const string &s) {os << s << c; });

	// ���󣺲��ܿ���os
	//for_each(words.begin(), words.end(), bind(print, os, _1, ' '));
	//for_each(words.begin(), words.end(), bind(print, std::ref(os), _1, ' '));

	//auto check6 = bind2nd(ptr_fun(check_size), 6); // ����check_size���յĵ�һ��������������������...
	//cout << check6("aaaaaaaaaaaaaaa");
}

// 10.4 ��̽������
void ex04()
{
	//list<int> lst = { 1,2,3,4 };
	//list<int> lst2, lst3; //{ 1 }; // ��list
	//// �������֮��lst2����4 3 2 1
	//std::copy(lst.cbegin(), lst.cend(), std::front_inserter(lst2));
	//// �������֮��lst3����1 2 3 4
	//*auto beg = lst3.begin();
	//lst3.erase(beg);*/
	//std::copy(lst.cbegin(), lst.cend(), inserter(lst3, beg));

	//istream_iterator<int> int_it(cin); // ��cin��ȡint
	//istream_iterator<int> int_eof; // istreamβ�������
	//ifstream in("afile");
	//istream_iterator<string> str_int(in); // ��"afile"��ȡ�ַ���

	//vector<int> vec;
	//char a;
	//cin >> a;
	//istream_iterator<int> in_iter(cin); // ��cin��ȡint
	//istream_iterator<int> eof; // istreamβ�������
	//while (in_iter != eof)
	//	// ���õ����������ȡ�������ص������ľ�ֵ
	//	// �����õ���������ô�����ȡ��ǰһ��ֵ
	//	vec.push_back(*in_iter++);

	//istream_iterator<int> in_iter(cin), eof; // ��cin��ȡint
	//vector<int> vec(in_iter, eof); // �ӵ�������Χ����vec

	/*istream_iterator<int> in(cin), eof;
	cout << std::accumulate(in, eof, 0) << endl;*/

	//vector<int> vec{ 1,2,3,4,5 };
	//ostream_iterator<int> out_iter(cout, " ");
	//for (auto e : vec)
	//	out_iter = e; // ��ֵ���ʵ���Ͼ��ǽ�Ԫ��д��cout
	//cout << endl;
	//copy(vec.begin(), vec.end(), out_iter);
	//cout << endl;

	//istream_iterator<Sales_item> item_iter(cin), eof;
	//ostream_iterator<Sales_item> out_iter(cout, "\n");
	//// ����һ�ʽ��׼�¼����sum�У�����ȡ��һ����¼
	//Sales_item sum = *item_iter++;
	//while (item_iter != eof) {
	//	// �����ǰ���׼�¼(����item_iter��)������ͬ��ISBN��
	//	if (item_iter->isbn() == sum.isbn())
	//		sum += *item_iter++; // ����ӵ�sum�ϲ���ȡ��һ����¼
	//	else {
	//		out_iter = sum;	// ���sum��ǰֵ
	//		sum = *item_iter++; // ��ȡ��һ����¼
	//	}
	//}
	//out_iter = sum; // ��ӡ���һ���¼�ĺ�

	/* 10.43 ��������� */
	//vector<int> vec = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//sort(vec.begin(), vec.end());	// ��"������"����vec
	//// ���������򣺽���СԪ�ط���vec��ĩβ
	//sort(vec.rbegin(), vec.rend());

	//// ��βԪ�ص���Ԫ�صķ��������
	//for (auto r_iter = vec.crbegin();	// ��r_iter�󶨵�βԪ��
	//	r_iter != vec.crend();			// crendֻ����Ԫ��֮ǰ��λ��
	//	++r_iter)						// ʵ���ǵݼ����ƶ���ǰһ��Ԫ��
	//	cout << *r_iter << endl;		// ��ӡ 9, 8, 7, ... 0

	string line("apple,about,at,add,an,app");
	// ��һ�����ŷָ���б��в��ҵ�һ��Ԫ��
	string::const_iterator comma = find(line.cbegin(), line.cend(), ',');
	cout << string(line.cbegin(), comma) << endl;
	// ��һ�����÷ָ���б��в������һ��Ԫ��
	string::const_reverse_iterator rcomma = find(line.crbegin(), line.crend(), ',');
	string::const_reverse_iterator rcomma1 = find(rcomma, line.crend(), ',');
	// ���󣺽�����������ʵ��ַ�
	cout << string(line.crbegin(), rcomma) << endl;
	// ��ȷ���õ�һ��������������Ӷ��ſ�ʼ��ȡ�ַ�֪��lineĩβ
	cout << string(rcomma.base(), line.cend()) << endl;
}

// 10.5 �����㷨�ṹ
void ex05()
{

}

// 10.6 �ض������㷨
void ex06()
{
	std::list<int> lst{ 1, 2, 3, 4, 5, 6 };
	std::list<int> lst2{ 7, 8, 9, 10, 11, 12 };
	std::forward_list<int> flst{ 1, 2, 3, 4, 5, 6 };
	std::forward_list<int> flst2{ 7, 8, 9, 10, 11, 12 };

	//lst.splice(lst.begin(), lst2);
	//flst.splice_after(flst.begin(), flst2);
	/*lst.splice(lst.begin(), lst2, lst2.begin());
	flst.splice_after(flst.begin(), flst2, flst2.begin()++);*/
	lst.splice(lst.begin(), lst2, lst2.begin(), lst2.end());
	flst.splice_after(flst.begin(), flst2, flst2.begin(), flst2.end());

	for each (int var in lst)
	{
		cout << var << endl;
	}
	cout << "-----------------------------------------" << endl;
	for each (int var in flst)
	{
		cout << var << endl;
	}
}

int main1()
{
	//ex01();
	//ex02();
	//ex03();
	//ex04();
	//ex05();
	ex06();


	system("pause");
	return 0;
}