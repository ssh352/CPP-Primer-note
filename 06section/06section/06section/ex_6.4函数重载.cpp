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
#include <cassert>
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

const int * func(const int* val)
{
	cout << *val << endl;
	return val;
}

#define NDEBUG

//void func(int *val)
//{
//	cout << *val + 10 << endl;
//}

//inline const string &shorterString(const string &s1, const string &s2)
//{
//	return s1.size() <= s2.size() ? s1 : s2;
//}

//string &shorterString(string &s1, string &s2)
//{
//	return s1.size() <= s2.size() ? s1 : s2;
//}

//string &shorterString(string &s1, string &s2)
//{
//	auto &r = shorterString(const_cast<const string&>(s1), const_cast<const string&>(s2));
//	return const_cast<string&>(r);
//}

//string read();
//void print(const string &);
//void print(double); // ����print����
//void fooBar(int ival)
//{
//	bool read = false; // ����������read
//	string s = read(); // ����read��һ������ֵ�����Ǻ���
//	// ���õ�ϰ�ߣ�ͨ����˵���ھֲ���������������������һ���õ�ѡ��
//	void print(int); // �������������������print
//	print("Vlaue: "); // ����print(const string &)��������
//	print(ival); // ��ȷ����ǰprint(int)�ɼ�
//	print(3.14);// ��ȷ������print(int); print(double)��������
//}

//void print(const string &);
//void print(double);
//void print(int);
//void fooBar2(int ival)
//{
//	print("Value: ");
//	print(ival);
//	print(3.14);
//}

typedef string::size_type sz;
string screen(sz ht = 24, sz wid = 80, char backgrnd = ' ');

constexpr int new_sz() {
	return 42;
}

constexpr int foo = new_sz();

constexpr size_t scale(size_t cnt) {
	/*int i = 10;
	printf("%d\n", i);*/
	return new_sz()*cnt;
}

void print(const int ia[], size_t size)
{
#ifndef NDEBUG
	// --func-- �Ǳ����������һ���ֲ���̬���������ڴ�ź���������
	cerr << __func__ << ": array size is " << size << endl;
#endif
	//...
}


void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

int main()
{
	/*int b[2][3][4];
	int(*p)[3][4] = b;
	cout << sizeof(b[0]) << endl;*/

	//f(5.6); // ����void f(double, double)

	/*int i = 20;
	func(&i);*/

	/*string s1 = "hahaha";
	string s2 = "xixi";
	shorterString(s1, s2) = "gege";
	cout << s2 << endl;*/

	/*int arr1[scale(2)];
	int i = 2;
	int j = scale(i);*/
	//int arr2[scale(i)];

#pragma region MyRegion
			/*assert(5 < 4);*/
//string word = "haha";
//size_t threshold = 10;
//if (word.size() < threshold)
//{
//	cerr << "Error: " << __FILE__
//		<< " : in function " << __func__
//		<< " at line " << __LINE__ << endl
//		<< "		Compiled on " << __DATE__
//		<< " at " << __TIME__ << endl
//		<< "	Word read was \"" << word
//		<< "\": Length too short " << endl;
//}  
#pragma endregion


	system("pause");
	return 0;
}