// �ᱨ����Ϊ��dummy_fcn������(�����������ͺͲ����б���ʹ�õ�����)��private�г�Ա������ʱ
// ��û�ж���pos;

#include <iostream>

// ע�⣺��δ����Ϊ��˵�����ã�����һ�κܺõĴ���
// ͨ������²�����Ϊ�����ͳ�Աʹ��ͬ��������
int height;		// ������һ�����֣��Ժ���Screen��ʹ��
class Screen {
public:
	void dummy_fcn(pos height) {
		cursor = width*height;	// �ĸ�height?���Ǹ�����
	}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	typedef std::string::size_type pos;
};

int main()
{
	return 0;
}