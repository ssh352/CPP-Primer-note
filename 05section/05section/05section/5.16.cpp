#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	// ��������ǰһ�ְɣ�Ҳ����whileѭ����֪����Χ�ģ�forѭ��ֱ����Χ��
	// ��Ϊ������������������

	/*vector<string> svec;
	string tmp;
	while (getline(cin, tmp))
		svec.push_back(tmp);
	for (auto itBeg = svec.begin(),itEnd=svec.end(); itBeg !=itEnd ; ++itBeg)
	{
		cout << *itBeg << ' ';
	}
	cout << endl;*/

	/*vector<string> svec;
	string tmp;
	for (; getline(cin, tmp);)
		svec.push_back(tmp);
	auto itBeg = svec.begin(), itEnd = svec.end();
	while (itBeg != itEnd)
		cout << *itBeg++ << ' ';
	cout << endl;*/
	system("pause");
	return 0;
}