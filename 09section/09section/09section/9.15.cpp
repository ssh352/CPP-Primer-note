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

bool IsEqual(const vector<int> &vec1, const vector<int> &vec2)
{
	return vec1 == vec2;
}

int main()
{
	vector<int> vec1{ 1,2,3,4 };
	vector<int> vec2{ 2,3,5 };
	vector<int> vec3{ 1,2,3,4 };

	cout << IsEqual(vec1, vec2) << endl;
	cout << IsEqual(vec3, vec2) << endl;
	cout << IsEqual(vec1, vec3) << endl;

	system("pause");
	return 0;
}