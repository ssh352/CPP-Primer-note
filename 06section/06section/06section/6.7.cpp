#include "Chen_Yin.h"
int showCalledCountFact(int num)
{
	static size_t ctr = 0;
	return ctr++;
}
int main()
{
	// �β���ʵ�γ�ʼ������������Ϊ������
	// �ֲ��������Բ���ʼ�����Ӷ�ӵ��һ��δ�����ֵ����������Ϊ����������������β
	// �ֲ���̬�������Բ���ʼ������ִ��ֵ��ʼ������������Ϊ0����������Ϊ�������õ��������
	for (size_t i = 0; i != 10; ++i)
	{
		cout << "calling is: " << showCalledCountFact(i) << endl;
	}
	system("pause");
	return 0;
}