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
using std::istream;
using std::ostream;
typedef string::size_type sz;

// ���������͵�ַ�ĺ���Ӧ����const
// ��Ϊ��Щ���������޸Ķ����ֵ��ͬʱ����Ҫconst����������ָ���ܹ�����

typedef struct Person {
	string firstName;
	string lastName;
	string address;

	string FName() const {
		return firstName;
	}
	string LName() const;
	string Add() const;
} Person;

string Person::Add() const {
	return address;
}

string Person::LName() const {
	return lastName;
}

istream &read(istream &istr, Person &per) {
	istr >> per.firstName >> per.lastName >> per.address;
	return istr;
}

ostream &print(ostream &ostr, Person &per)
{
	ostr << per.FName() << " " << per.LName() << " " << per.Add();
	return ostr;
}

int main()
{
	Person per;
	read(cin, per);
	print(cout, per);
	cout << endl;
	system("pause");
	return 0;
}