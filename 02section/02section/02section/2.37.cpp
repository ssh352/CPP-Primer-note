#include <iostream>
int main()
{
	//����    ����    ֵ
	//a       int     3
	//b       int     4
	//c       int     3
	//d       int&    3
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b) d = a;	// a=b����int&���ͣ�����b���ḳֵ��a
	std::cout << "a: " << a << std::endl
		<< "b: " << b << std::endl
		<< "c: " << c << std::endl
		<< "d: " << d << std::endl;
	system("pause");
	return 0;
}