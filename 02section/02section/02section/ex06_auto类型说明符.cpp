#include <iostream>
int main()
{
	int i = 0, &r = i;
	auto a = r;		// a��һ������(r��i�ı�������i��һ������)
	const int ci = i, &cr = ci;
	auto b = ci;	// b��һ������(ci�Ķ���const���Ա����Ե���)
	auto c = cr;	// c��һ������(cr��ci�ı�����ci������һ������const)
	auto d = &i;	// d��һ������ָ��(�����ĵ�ַ����ָ��������ָ��)
	auto e = &ci;	// e��һ��ָ������������ָ��(�Գ�������ȡ��ַ��һ�ֵײ�const)

	const auto f = ci;	// ci���ƶ�������int, f��const int

	auto &g = ci;	// g��һ�����ͳ������ã��󶨵�ci
	auto &h = 42;	// ���󣺲���Ϊ�ǳ������ð�����ֵ
	const auto &j = 42;	// ��ȷ������Ϊ�������ð�����ֵ

	auto k = ci, &l = i;// kʱ������lʱ��������
	auto &m = ci, *p = &ci;	// m�ǶԳ��������ã�p��ָ�����ͳ�����ָ��
	// ����i��������int��&ci��������const int
	auto &n = i, *p = &ci;
	return 0;
}