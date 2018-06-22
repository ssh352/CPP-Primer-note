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

#pragma region capacity��size
void ex1()
{
	vector<int> ivec;
	// szieӦ��Ϊ0��capacity��ֵ�����ھ���ʵ��
	cout << "ivec: size: " << ivec.size()
		<< " capacity: " << ivec.capacity() << endl;
	// ��ivec���24��Ԫ��
	for (vector<int>::size_type ix = 0; ix != 24; ++ix)
		ivec.push_back(ix);

	// sizeӦ��Ϊ24��capacityӦ�ô��ڵ���24������ֵ�����ڱ�׼��ʵ��
	cout << "ivec: size: " << ivec.size()
		<< " capacity: " << ivec.capacity() << endl;

	ivec.reserve(50);	// ��capacity�����趨Ϊ50�����ܻ����
	// sizeӦ��Ϊ24��capacityӦ�ô��ڵ���50������ֵ�����ڱ�׼��ʵ��
	cout << "ivec: size: " << ivec.size()
		<< " capacity: " << ivec.capacity() << endl;

	// ���Ԫ���ù��������
	while (ivec.size() != ivec.capacity())
		ivec.push_back(0);
	// capacityӦ��δ�ı䣬size��capacity�����
	cout << "ivec: size: " << ivec.size()
		<< " capacity: " << ivec.capacity() << endl;

	ivec.push_back(42);	// �����һ��Ԫ��
	// sizeӦ��Ϊ51��capacityӦ�ô��ڵ���51������ֵ�����ڱ�׼��ʵ��
	cout << "ivec: size: " << ivec.size()
		<< " capacity: " << ivec.capacity() << endl;

	ivec.shrink_to_fit();	// Ҫ��黹�ڴ�
	// sizeӦ��δ�ı䣻capacity��ֵ�����ھ���ʵ��
	cout << "ivec: size: " << ivec.size()
		<< " capacity: " << ivec.capacity() << endl;
}
#pragma endregion

int main(void)
{
	ex1();

	system("pause");
	return 0;
}