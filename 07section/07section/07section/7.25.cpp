#include <iostream>
#include <string>

using std::string;

class Screen
{
public:
	typedef string::size_type pos;
	using pos = string::size_type;
	Screen() = default;
	Screen(pos ht, pos wt) :
		height(ht), width(wt), contents(ht*wt, ' ') {}
	Screen(pos ht, pos wt, string str) :
		height(ht), width(wt), contents{ str } {}
	Screen(pos ht, pos wt, char c) :
		height(ht), width(wt), contents(ht*wt, c) {}
	char get()
	{
		return contents[cursor];
	}
	inline char get(pos ht, pos wd) const;	// ��ʽ����
	Screen &move(pos r, pos c);		// ����֮����Ϊ����
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
};

char Screen::get(pos ht, pos wd) const
{
	return contents[ht*width + wd];
}

Screen &Screen::move(pos r, pos c)
{
	cursor = r*width + c;
	return *this;
}

// Screen�ܰ�ȫ�����ڿ����͸�ֵ������Ĭ�ϰ汾��
// ��Ϊʹ��Vector��string����̬�ڴ�
// �����vector����string��Ա�����俽������ֵ�����ٵĺϳɰ汾�ܹ���������

int main()
{
	Screen sc1(10, 10, ' ');
	Screen sc2 = sc1;	// ����
	Screen sc3;
	sc3 = sc1;			// ��ֵ
	system("pause");
	return 0;
}