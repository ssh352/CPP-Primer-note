#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
// ���ctr��ֵ����1������word�ĸ�����ʽ
string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}
int main()
{
	cout << make_plural(1, "success") << endl;
	cout << make_plural(2, "success") << endl;
	cout << make_plural(1, "failure") << endl;
	cout << make_plural(2, "failure") << endl;

	system("pause");
	return 0;
}