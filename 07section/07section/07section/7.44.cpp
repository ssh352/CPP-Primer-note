#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using std::vector;

struct NoDefault {
	NoDefault(int i) {};
};

struct C {
	C() :n(0) {}
	NoDefault n;
};

int main(void)
{
	// ���Ϸ���NoDefaultû��Ĭ�ϵĹ��캯��
	vector<NoDefault> vec(10);

	system("pause");
	return 0;
}