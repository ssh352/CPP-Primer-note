#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	//forѭ������һ�㣬�ṹ�������������������Ϊ��ʱ�������������
	string s;
	cout << "Enter a string: \n";
	getline(cin, s);
#pragma region whileѭ��
	/*decltype(s.size()) i = 0;
while(i<s.size())
	s[i++] = 'X';*/
#pragma endregion
#pragma region forѭ��
	//for (size_t i = 0; i < s.size(); i++)
//{
//	s[i] = 'X';
//}  
#pragma endregion

	cout << s << endl;
	system("pause");
	return 0;
}