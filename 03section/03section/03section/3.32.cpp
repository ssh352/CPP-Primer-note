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
#pragma region Array
	/*int arr[10];
for (size_t i = 0; i < 10; i++)
{
	arr[i] = i;
}
int arr2[10];
for (size_t i = 0; i < 10; i++)
{
	arr2[i] = arr[i];
}
for (int i : arr2)
	cout << i << "\t";
cout << endl;*/
#pragma endregion

	vector<int> ivec;
	for (size_t i = 0; i < 10; i++)
	{
		ivec.push_back(i);
	}
	vector<int> ivec2 = ivec;
	for (int i : ivec2)
		cout << i << "\t";
	cout << endl;
	system("pause");
	return 0;
}