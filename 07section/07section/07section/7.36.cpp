#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

// ��Ա�ĳ�ʼ��˳�����������ඨ���еĳ���˳��һ��
// ���Ի��ȳ�ʼ��rem����ʱbase��δ�����
struct X {
	//X(int i, int j) :base(i), rem(base%j) {}
	// �޸�
	X(int i, int j) :base(i), rem(i%j) {}
	int rem, base;
};

int main(void)
{
	X x(10, 7);
	std::cout << x.rem << std::endl << x.base << std::endl;

	system("pause");
	return 0;
}