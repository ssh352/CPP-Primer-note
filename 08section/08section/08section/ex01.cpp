#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib> // ����main������������EXIT_FAILURE��EXIT_SUCCESS
#include <cassert> // ����assert
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
using std::istream;
using std::ostream;
using std::ofstream;
using std::flush;
using std::ends;
using std::unitbuf;
using std::nounitbuf;

typedef string::size_type sz;

void process_input(istream &istr)
{
	int ival;
	istr >> ival;
	cout << ival;
}

int main()
{
	//ofstream out1, out2;
	//out1 = out2;		// ���󣺲��ܶ�������ֵ
	//ofstream print(ofstream);	// ���󣺲��ܳ�ʼ��ofstream����
	//out2 = print(out2);	// ���󣺲��ܿ���������

	//int ival;
	//cin >> ival;	// ���ӱ�׼�����ϼ�����ĸ���ļ�������־�ȣ��������ͻ�ʧ��

	//while (cin >> ival)
	//	;

	//istream::badbit;


	// ��סcin�ĵ�ǰ״̬
	//auto old_state = cin.rdstate();	// ��סcin�ĵ�ǰ״̬
	//cin.clear();					// ʹcin��Ч
	//process_input(cin);				// ʹ��cin
	//auto new_state = cin.rdstate();
	//cin.setstate(old_state);		// ��cin��Ϊԭ��״̬

	//cout << "hi!" << endl;	// ���hi��һ�����У�Ȼ��ˢ�»�����
	//cout << "hi!" << flush;	// ���hi��Ȼ��ˢ�»��������������κζ����ַ�
	//cout << "hi!" << ends;	// ���hi��һ�����ַ���Ȼ��ˢ�»�����

	//cout << unitbuf;	// ������������󶼻����ˢ�»�����
	//// �κ����������ˢ�£��޻���
	//cout << nounitbuf;	// �ص������Ļ��巽ʽ

	//cin.tie(&cout);	// ����������չʾ����׼�⽫cin��cout������һ��
	//// old_tieָ��ǰ������cin����(����еĻ�)
	//ostream *old_tie = cin.tie(nullptr);// cin����������������
	//// ��cin��cerr�������ⲻ��һ�������⣬��ΪcinӦ�ù�����cout
	//cin.tie(&cerr);	// ��ȡcin��ˢ��cerr������cout
	//cin.tie(old_tie);	// �ؽ�cin��cout�����������

	system("pause");
	return 0;
}