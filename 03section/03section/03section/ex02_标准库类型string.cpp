#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
	//string s1 = "hello", s2 = "world";
	//string s3 = s1 + ", " + s2 + '\n';

	//string s4 = s1 + ",";// ��ȷ����һ��string�����һ������ֵ���
	////string s5 = "hello" + ",";//��������������󶼲���string
	////��ȷ��ÿ���ӷ����������һ�����������string
	//string s6 = s1 + "," + "world";
	////string s7 = "hello" + "," + s2;//���󣺲��ܰ�����ֱֵ�����

	//string str("some string");
	////ÿ�����str�е�һ���ַ�
	//for (auto c : str)//����str�е�ÿ���ַ�
	//	cout << c << endl;//�����ǰ�ַ����������һ�����з�

	//string s("Hello World!!!");
	//// punct_cnt�����ͺ�s.size�ķ�������һ��
	//decltype(s.size()) punct_cnt = 0;
	//// ͳ��s�б����ŵ�����
	//for (auto c : s)	//����s�е�ÿ���ַ�
	//	if (ispunct(c))	//������ַ��Ǳ�����
	//		++punct_cnt;
	//cout << punct_cnt
	//	<< " punctuation characters in " << s << endl;

	//string s("Hello World!!!");
	//ת���ɴ�д��ʽ
	//for (auto &c : s)	//����s�е�ÿ���ַ�(ע�⣺c������)
	//	c = toupper(c);	//c��һ�����ã���˸�ֵ��佫�ı�s���ַ���ֵ
	//cout << s << endl;

	//string s("some string");
	//if (!s.empty())
	//	s[0] = toupper(s[0]);

	////���δ���s�е��ַ�ֱ�����Ǵ�����ȫ���ַ���������һ���հ�
	//for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
	//	s[index] = toupper(s[index]);//����ǰ�ַ���Ϊ��д��ʽ
	//cout << s << endl;

	//const string hexdigits = "0123456789ABCDEF";//���ܵ�ʮ����������
	//cout << "Enter a series of numbers between 0 and 15"
	//	<< " separated by spaces. Hit ENTER when finished: "
	//	<< endl;
	//string result;//���ڱ���ʮ�����Ƶ��ַ���
	//string::size_type n;
	//while (cin >> n)
	//	if (n < hexdigits.size())
	//		result += hexdigits[n];//�õ���Ӧ��ʮ����������
	//cout << "Your hex number is: " << result << endl;
	system("pause");
	return 0;
}