#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::cout;
using std::endl;
using std::vector;
using std::string;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}

void bigies(vector<string> &words,
	vector<string>::size_type sz)
{
	[](vector<string> &words)
	{
		sort(words.begin(), words.end());
		// unique�������뷶Χ��ʹ��ÿ������ֻ����һ��
		// �����ڷ�Χ��ǰ��������ָ���ظ�����֮��һ��λ�õĵ�����
		vector<string>::iterator end_unique = std::unique(words.begin(), words.end());
		// ʹ����������eraseɾ���ظ�����
		words.erase(end_unique, words.end());
	}(words);
	auto wc = std::partition(words.begin(), words.end(), std::bind(check_size, std::placeholders::_1, sz));
	std::for_each(words.begin(), wc,
		[](const string &s)
	{
		cout << s << " ";
	});
}

int main()
{
	vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	bigies(words, 5);

	system("pause");
	return 0;
}