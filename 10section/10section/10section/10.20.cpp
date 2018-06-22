#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;

void elimDups(vector<string> &words)
{
	// ���ֵ�������words���Ա�����ظ�����
	sort(words.begin(), words.end());
	// unique�������뷶Χ��ʹ��ÿ������ֻ����һ��
	// �����ڷ�Χ��ǰ��������ָ���ظ�����֮��һ��λ�õĵ�����
	vector<string>::iterator end_unique = std::unique(words.begin(), words.end());
	// ʹ����������eraseɾ���ظ�����
	words.erase(end_unique, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words); // ��words���ֵ�������ɾ���ظ�����
	// ���������򣬳�����ͬ�ĵ���ά���ֵ���
	std::stable_sort(words.begin(), words.end(),
		[](const string &a, const string &b)
	{
		return a.size() < b.size();
	});
	// ��ȡһ����������ָ���һ����סsize()>=sz��Ԫ��
	auto wc = std::find_if(words.begin(), words.end(),
		[sz](const string &a)
	{
		return a.size() >= sz;
	});
	// ����������size>=sz��Ԫ�ص���Ŀ
	auto count = std::count_if(words.begin(), words.end(),
		[sz](const string &a)
	{
		return a.size() >= sz;
	});
	// ��ӡ���ȴ��ڵ��ڸ���ֵ�ĵ��ʣ�ÿ�����ʺ����һ���ո�
	std::for_each(wc, wc + count,
		[](const string &s)
	{
		cout << s << " ";
	});
}

int main()
{
	vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	biggies(words, 5);

	system("pause");
	return 0;
}