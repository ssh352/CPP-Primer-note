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

int main()
{
	vector<int> vec1;	// ��


	vector<int> vec2(vec1);	// ��vec1һ��
	vector<int> vec3 = vec1;// ��vec1һ��


	vector<int> vec4(vec1.begin(), vec1.end());	// Ҳ��vec1һ��


	vector<int> vec5 = { 1,2,3,4 };	// 1,2,3,4
	vector<int> vec6{ 1,2,3,4 };	// 1,2,3,4


	vector<int> vec7(10);	// 10����


	vector<int> vec8(10, 10);	// 10��10

	system("pause");
	return 0;
}