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
	int arr[10];
	for (size_t i = 0; i < 10; i++)
		arr[i] = i;
	for (int i : arr)
		cout << i << "\t";
	cout << endl;
	system("pause");
	return 0;
}