#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t����
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	// Ӧ����ix<array_size����Ӧ����<=
	constexpr size_t array_size = 10;
	int ia[array_size];
	//for (size_t ix = 0; ix <= array_size; ix++)
	for (size_t ix = 0; ix < array_size; ix++)
		ia[ix] = ix;
	system("pause");
	return 0;
}