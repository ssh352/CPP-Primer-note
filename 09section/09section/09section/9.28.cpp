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

void Func(forward_list<string> &fls, string strPrev, string strInsert)
{
	forward_list<string>::iterator prev = fls.before_begin();
	forward_list<string>::iterator curr = fls.begin();

	while (curr != fls.end())
	{
		if (*curr == strPrev)
		{
			fls.insert_after(prev, strInsert);
			return;
		}
		else
			prev = curr++;
	}
	fls.insert_after(prev, strInsert);
}

int main()
{
	forward_list<string> fls{ "����","����","�Ǻ���" };

	Func(fls, "����", "111");
	for (auto var : fls)
	{
		cout << var << " ";
	}
	cout << endl;
	Func(fls, "ʲôŶ", "222");
	for (auto var : fls)
	{
		cout << var << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}