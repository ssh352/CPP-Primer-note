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

int main()
{
	vector<string> vecsi = { "1","2","3","4","5","6" };
	vector<string> vecsf({ "1.1","2.1","3.1","4.1","5.1","6.1" });
	int counti = 0;
	float countf = 0;
	for (auto var : vecsi)
	{
		counti += stoi(var);
	}

	for (auto var : vecsf)
	{
		countf += stof(var);
	}

	cout << "���ͺ�Ϊ��" << counti << endl;
	cout << "�����ͺ�Ϊ��" << countf << endl;

	system("pause");
	return 0;
}