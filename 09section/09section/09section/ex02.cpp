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

typedef string::size_type sz; 

class Sales_data
{
	// ΪSales_data�ķǳ�Ա������������Ԫ����
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend istream &read(istream&, Sales_data&);
	friend ostream &print(ostream&, const Sales_data&);
public:		// ����˷���˵����
			// ����Ĭ�Ϲ��캯����������ֻ����һ��stringʵ�εĹ��캯��������ͬ
	Sales_data(std::string s = "") :bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(std::istream&);
	std::string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data&);

private:	// ����˷���˵����
	double avg_price() const { return units_sold ? revenue / units_sold : 0; }
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	istream &myread(istream &is)
	{
		double price = 0;
		is >> bookNo >> units_sold >> price;
		revenue = price*units_sold;
		return is;
	}

	ostream &myprint(ostream &os) const
	{
		os << isbn() << " " << units_sold << " " << revenue << " " << avg_price();
		return os;
	}

	Sales_data myadd(const Sales_data &lhs) const
	{
		Sales_data sum = lhs; // ��lhs�����ݳ�Ա������sum
		sum.combine(*this); // ��rhs�����ݳ�Ա�ӵ�sum����
		return sum;
	}
};

// Sales_data�ӿڵķǳ�Ա��ɲ��ֵ�����
Sales_data add(const Sales_data&, const Sales_data&);
istream &read(istream&, Sales_data&);
ostream &print(ostream&, const Sales_data&);

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold; // ��rhs�ĳ�Ա�ӵ�this����ĳ�Ա��
	revenue += rhs.revenue;
	return *this; // ���ص��øú����Ķ���
}

istream &read(istream &is, Sales_data &item)
{
	return item.myread(is);
}

ostream &print(ostream &os, const Sales_data &item)
{
	return item.myprint(os);
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.myadd(rhs);
}

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this); // read�����������Ǵ�is�ж�ȡһ��������ϢȻ�����this������
}

//����
void ex00()
{
	//list<Sales_data>	// ����Sales_data�����list
	//deque<double>		// ����double��deque

	//vector<vector<string>> lines; // vector��vector

	// �ٶ�noDefault��һ��û��Ĭ�Ϲ��캯��������
	//vector<noDefault> v1(10, init); // ��ȷ���ṩ��Ԫ�س�ʼ����
	//vector<noDefault> v2(10); // ���󣺱����ṩһ��Ԫ�س�ʼ����

#pragma region ���ͱ���
	/*vector<int> vi(2);
	vector<int>::iterator it = vi.begin();
	vector<int>::const_iterator cit = vi.end();

	vector<int>::size_type i;
	vector<int>::difference_type di;

	vector<int>::value_type ii;

	vector<int>::reference rii = vi[0];
	vector<int>::const_reference cri = vi[0];*/
#pragma endregion

#pragma region ���캯��
	vector<int> vec(10);
	for (size_t i = 0; i != 10; ++i)
	{
		vec[i] = i;
	}

	for (auto var : vec)
	{
		cout << var << endl;
	}

	//vector<int> vecc(20);

	vector<int> vec2(vec.begin() + 5, vec.end());//vecc.end()
	for (auto var : vec2)
	{
		cout << var << endl;
	}

	vector<int> vec3{ 10,11,12,13 };
	for (auto iter = vec3.begin(); iter != vec3.end(); ++iter)
	{
		cout << *iter << endl;
	}
#pragma endregion

#pragma region ��ֵ��swap
	/*vector<int> vec{ 1,2,3,4 };
	vector<int> vec2{ 9,8,7,6 };

	vector<int> vec3;
	vec3 = vec;
	vec3.swap(vec2);

	vec3 = { 6,66,666 };

	swap(vec3, vec2);*/
#pragma endregion

#pragma region ��С
	/*vector<int> vec(10);
	cout << vec.size() << endl;
	cout << vec.max_size() << endl;
	cout << vec.empty() << endl;*/
#pragma endregion

#pragma region ���/ɾ��Ԫ��(��������array)
	//vector<int> vec(3, 2);
	//vec.insert(vec.begin() + 1, 1);
	//for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	//{
	//	cout << *iter << endl;
	//}

	////vec.emplace();

	//vec.erase(vec.begin());
	//for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	//{
	//	cout << *iter << endl;
	//}

	//vec.clear();
	//for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	//{
	//	cout << *iter << endl;
	//}
#pragma endregion

#pragma region ��ȡ������
	/*vector<int> vec(3);

	auto iter1 = vec.cbegin();
	auto iter2 = vec.rbegin();*/
#pragma endregion
}

void ex01()
{
	vector<int> vec(3);
	int val = 10;
	auto begin = vec.begin();
	auto end = vec.end();
	while (begin != end) {
		*begin = val;	// ��ȷ����Χ�ǿգ����beginָ���һ��Ԫ��
		++begin;	// �ƶ�����������ȡ��һ��Ԫ��
	}
}

void ex02()
{
	// iter��ͨ��list<string>�����һ������������
	list<string>::iterator iter;
	// count��ͨ��vector<int>�����һ��difference_type����
	vector<int>::difference_type count;
}

void ex03()
{
	list<string> a = { "����","����","����" };
	auto it1 = a.begin();	// list<string>::iterator
	auto it2 = a.rbegin();	// list<string>::reverse_iterator
	auto it3 = a.cbegin();	// list<string>::const_iterator
	auto it4 = a.crbegin();	// list<string>::const_reverse_iterator

	// ��ʾָ������
	list<string>::iterator it5 = a.begin();
	list<string>::const_iterator it6 = a.begin();
	// ��iterator����const_iterator������a������
	auto it7 = a.begin();	// ����a��constʱ��it7��const_iterator
	auto it8 = a.cbegin();	// it8��const_iterator
}

void ex04()
{
	//array<int, 5> arr;

	// ÿ������������Ԫ�أ��ø����ĳ�ʼ�������г�ʼ��
	list<string> authors = { "����","����","����" };
	vector<const char*> articles = { "a","an","the" };

	list<string> list2(authors); // ��ȷ������ƥ��
	//deque<string> authList(authors); // �����������Ͳ�ƥ��
	//vector<string> words(articles); // �����������ͱ���ƥ��
	// ��ȷ�����Խ�const char*Ԫ��ת��Ϊstring
	forward_list<string> words(articles.begin(), articles.end());

	//vector<int> ivec(10, -1); // 10��intԪ�أ�ÿ������ʼ��Ϊ-1
	//list<string> svec(10, "hi"); // 10��strings��ÿ������ʼ��Ϊ"hi"
	//forward_list<int> ivec(10); // 10��Ԫ�أ�ÿ������ʼ��Ϊ0
	//deque<string> svec(10); // 10��Ԫ�أ�ÿ�����ǿ�string

	//array<int, 42>;	// ����Ϊ������42��int������
	//array<string, 10>; // ����Ϊ������10��string������

	array<int, 10>::size_type i;	// �������Ͱ���Ԫ�����ͺʹ�С
	//array<int>::size_type j;		// ����array<int>����һ������

	array<int, 10> ia1;	// 10��Ĭ�ϳ�ʼ����int��δ����ֵ
	array<int, 10> ia2 = { 0,1,2,3,4,5,6,7,8,9 }; // �б��ʼ��
	array<int, 10> ia3 = { 42 };	// ia3[0]Ϊ42��ʣ��Ԫ��Ϊ0

	int digs[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//int cpy[10] = digs;	// �����������鲻֧�ֿ�����ֵ
	array<int, 10> digits = { 0,1,2,3,4,5,6,7,8,9 };
	array<int, 10> copy = digits;	// ��ȷ��ֻҪ��������ƥ�伴�Ϸ�
}

void ex05()
{
	//c1 = c2;	// ��c1�������滻Ϊc2��Ԫ�صĿ���
	//c1 = { a,b,c };	// ��ֵ��c1��СΪ3

	array<int, 10> a1 = { 0,1,2,3,4,5,6,7,8,9 };
	array<int, 10> a2 = { 1 };	// ����Ԫ�ؾ�Ϊ0
	a1 = a2;	// �滻a1�е�Ԫ��
	a2 = { 0 };	// ���󣺲��ܽ�һ���������б������飬C++11����

	/*for (auto var : a2)
	{
		cout << var << endl;
	}*/

	vector<int> v1{ 1,2,3,4,5,6 };
	vector<int> v2{ 7,8,9 };

	cout << &v1[0] << endl;
	cout << &v2[0] << endl;

	v1.swap(v2);

	cout << &v1[0] << endl;
	cout << &v2[0] << endl;

	/*cout << v1.size() << endl;
	cout << v2.size() << endl;*/

	list<string> names;
	vector<const char*> oldstyle;
	//names = oldstyle;	// �����������Ͳ�ƥ��
	// ��ȷ�����Խ�const char*ת��Ϊstring
	names.assign(oldstyle.cbegin(), oldstyle.cend());

	names.assign({ "����", "����" });
	for (auto var : names)
	{
		cout << var << endl;
	}

	// �ȼ���slist1.clear();
	// ���slist1.insert(slist1.begin(), 1-, "Hiya!");
	list<string> slist1(1);	// 1��Ԫ�أ�Ϊ��string
	slist1.assign(10, "Hiya!");	// 10��Ԫ�أ�ÿ������"Hiya!"

	cout << slist1.size() << endl;
	slist1.clear();
	cout << slist1.size() << endl;

	vector<string> svec1(10);	// 10��Ԫ�ص�vector
	vector<string> svec2(24);	// 24��Ԫ�ص�vector
	swap(svec1, svec2);
}

void ex06()
{
	vector<long long> vect;
	cout << vect.max_size() << endl;
	vect.push_back(vect.max_size() + 1);
	cout << vect[0] << endl;
}

void ex07()
{
	//vector<int> v1 = { 1,3,5,7,9,12 };
	//vector<int> v2 = { 1,3,9 };
	//vector<int> v3 = { 1,3,5,7 };
	//vector<int> v4 = { 1,3,5,7,9,12 };
	//v1 < v2		// true
	//v1 < v3		// false
	//v1 == v4	// true
	//v1 == v2	// false

	//vector<Sales_data> storeA, storeB;
	//if (storeA < storeB)	// ����Sales_dataû��<�����
	//	
}

int main()
{
	ex07();

	system("pause");
	return 0;
}