#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;

//sΪ�������Ϳ��Բ��ÿ������Ӷ�s�ܴ��ʱ��������Ч��
//����Ϊconst����Ϊ����Ҫ�ı�s��ֵ
//c��С��Ҳ����Ҫ�ı�ʵ�ε�ֵ�����Բ�������������
// occurs��ΪҪ�ı�ʵ�ε�ֵ������Ҫ����ͨ��������

//s����ͨ���ã�Ҳ���ᷢ��ʲô...
//occurs�ǳ������û����ֵ�޷��޸ģ��������
string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
	auto ret = s.size(); // ��һ�γ��ֵ�Ϊֹ(����еĻ�)
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (s[i] == c) {
			if (ret == s.size())
				ret = i; // ��¼c��һ�γ��ֵ�λ��
			++occurs; // �����ֵĴ�����1
		}
	}
	return ret; // ���ִ���ͨ��occurs��ʽ�ط���
}

int main()
{

	system("pause");
	return 0;
}