#include "Chen_Yin.h"
int showCalledCountFact(int num)
{
	static size_t ctr = 0;
	cout << "calling time: " << ++ctr << endl;
	int ret = 1;
	while (num > 1)
		ret *= num--;
	return ret;
}
int main()
{
	// �β���ʵ�γ�ʼ������������Ϊ������
	// �ֲ��������Բ���ʼ�����Ӷ�ӵ��һ��δ�����ֵ����������Ϊ����������������β
	// �ֲ���̬�������Բ���ʼ������ִ��ֵ��ʼ������������Ϊ0����������Ϊ�������õ��������
	for (size_t i = 0; i != 10; ++i)
	{
		cout << i << "! is: " << showCalledCountFact(i) << endl;
	}
	system("pause");
	return 0;
}