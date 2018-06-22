#define _CRT_SECURE_NO_WARNINGS
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

// a.Book		b.Date		c.Employee
// d.Vehicle	e.Object	f.Three

class Book
{
public:
	Book() :Book("", "", "", 0.0) {};
	Book(const string &name) :Book(name, "", "", 0.0) {}
	Book(const string name, const string isbn) :
		Book(name, isbn, "", 0.0) {}
	Book(const string name, const string isbn, const string author) :
		Book(name, isbn, author, 0.0) {}
	Book(const string name, const string isbn, const string author, double price) :
		name(name), isbn(isbn), author(author), price(price) {}

private:
	string name;
	string isbn;
	string author;
	double price = 0.0;
};

int main()
{
	const string name = "hewei";
	Book book(name);

	system("pause");
	return 0;
}