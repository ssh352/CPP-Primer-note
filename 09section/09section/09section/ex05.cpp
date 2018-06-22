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
using std::to_string;

typedef string::size_type sz;

void ex1()
{
	//const char *cp = "Hello World!!!"; // �Կ��ַ�����������
	//char noNull[] = { 'H','i' }; // �����Կ��ַ�����
	//string s1(cp); // ����cp�е��ַ�֪���������ַ�; s1 == "Hello World!!!"
	//string s2(noNull, 2); // ��noNull���������ַ���s2 == "Hi"
	//string s3(noNull); // δ���壺noNull�����Կ��ַ�����
	//string s4(cp + 6, 5); // ��cp[6]��ʼ����5���ַ���s4 == "World"
	//string s5(s1, 6, 5); // ��s1[6]��ʼ����5���ַ���s5 == "World"
	//string s6(s1, 6); // ��s1[6]��ʼ������ֱ��s1ĩβ��s6 == "World!!!"
	//string s7(s1, 6, 20); // ��ȷ��ֻ������s1ĩβ��s7 == "World!!!"
	//string s8(s1, 16); // �׳�һ��out_of_range�쳣


	string s("hello world");
	string s2 = s.substr(0, 5);	// s2 = hello
	string s3 = s.substr(6);	// s3 = world
	string s4 = s.substr(6, 11);// s3 = world
	string s5 = s.substr(12);	// �׳�һ��out_of_range�쳣
}

void ex2()
{
	//list<string> names;
	//vector<const char*> oldstyle{ "abc","bcd","cde" };
	////names = oldstyle;	// �����������Ͳ�ƥ��
	//// ��ȷ�����Խ�const char*ת��Ϊstring
	//names.assign(oldstyle.cbegin(), oldstyle.cend());
	//int i = 10;
	//cout << i << endl;

	//string s = "abc";
	//s.insert(s.size(), 5, '!'); // ��sĩβ����5����̾��
	//s.erase(s.size() - 5, 5); // ��sɾ�����5���ַ�
	//cout << s << endl;

	//const char *cp = "Stately, plump Buck";
	//s.assign(cp, 7); // s == "Stately"
	//s.insert(s.size(), cp + 7); // s == "Stately, plump Buck"
	//cout << s << endl;

	//string s = "some string", s2 = "some other string";
	//s.insert(0, s2);	// ��s��λ��0֮ǰ����s2�Ŀ���
	//// ��s[0]֮ǰ����s2��s2[0]��ʼ��s2.size()���ַ�
	//s.insert(0, s2, 0, s2.size());
	//cout << s << endl;

	string s("C++ Primer"), s2 = s;	// ��s��s2��ʼ��Ϊ"C++ Primer"
	s.insert(s.size(), " 4th Ed.");	// s == "C++ Primer 4th Ed."
	s2.append(" 4th Ed."); // �ȼ۷�������" 4th Ed."׷�ӵ�s2; s == s2
	cout << s << endl << s2 << endl;

	// ��"4th"�滻Ϊ"5th"�ĵȼ۷���
	s.erase(11, 3); // s == "C++ Primer Ed."
	s.insert(11, "5th"); // s == "C++ Primer 5th Ed."
	// ��λ��11��ʼ��ɾ��3���ַ�������"5th"
	s2.replace(11, 3, "5th"); // �ȼ۷�����s == s2
	cout << (s == s2) << endl;

	s.replace(11, 3, "Fifth"); // s == "C++ Primer Fifth Ed."
	cout << s << endl;
}

void ex3()
{
	//string name("AnnaBelle");
	//auto pos1 = name.find("Anna"); // pos1 == 0

	//string lowercase("annabelle");
	//pos1 = lowercase.find("Anna"); // pos1 == npos

	string numbers("0123456789"), name("r2d2");
	//// ����1������name�е�һ�������±�
	//auto pos = name2.find_first_of(numbers);

	//string dept("03714p3");
	//// ���� 5�����ַ�'p'���±�
	//auto pos2 = dept.find_first_not_of(numbers);

	//string::size_type pos = 0;
	//// ÿ��ѭ������name����һ����
	//while ((pos = name.find_first_of(numbers, pos))
	//	!= string::npos) {
	//	cout << "found number at index: " << pos
	//		<< " element is " << name[pos] << endl;
	//	++pos; // �ƶ�����һ���ַ�
	//}

	string river("Mississippi");
	auto first_pos = river.find("is"); // ����1
	auto last_pos = river.rfind("is"); // ����4

	cout << first_pos << endl << last_pos << endl;
}

// 9.5.5 ��ֵת��
void ex05()
{
	int i = 42;
	string s = std::to_string(i);	// ������iת��Ϊ�ַ���ʾ��ʽ
	double d = stod(s);				// ���ַ���sת��Ϊ������

	string s2 = "pi = 3.14";
	// ת��s�������ֿ�ʼ��һ���Ӵ������d = 3.14
	d = stod(s2.substr(s2.find_first_of("+-.0123456789")));

	cout << d << endl;
}

int main()
{
	//ex1();
	//ex2();
	//ex3();
	ex05();

	system("pause");
	return 0;
}