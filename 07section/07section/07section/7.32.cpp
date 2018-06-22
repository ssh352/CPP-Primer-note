#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Screen;

class Window_mgr {
public:
	// ������ÿ����Ļ�ı��
	using ScreenIndex = std::vector<Screen>::size_type;
	// ���ձ�Ž�ָ����Screen����Ϊ�հ�
	void clear(ScreenIndex);

	Window_mgr();

	void show();

private:
	// ���Window_mgr׷�ٵ�Screen
	// Ĭ������£�һ��Window_mgr����һ����׼�ߴ�Ŀհ�Screen
	std::vector<Screen> screens;
};

class Screen {
	friend void Window_mgr::clear(ScreenIndex);
public:
	typedef std::string::size_type pos;

	Screen &set(char);
	Screen &display(std::ostream &os)
	{
		do_display(os);
		return *this;
	}
	const Screen &display(std::ostream &os) const
	{
		do_display(os);
		return *this;
	}

	void some_member() const;

	Screen() = default;		// ��ΪScreen����һ�����캯�������Ա�����ʹ�����
							// cursor�������ڳ�ʼֵ��ʼ��Ϊ0
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht * wd, c) {}
	Screen(pos ht, pos wd) :height(ht), width(wd) {}

	char get() const	// ��ȡ��괦���ַ�
	{
		return contents[cursor];	// ��ʽ����
	}
	inline char get(pos ht, pos wd) const;	// ��ʽ����
	Screen &move(pos r, pos c);		// ����֮����Ϊ����
private:
	void do_display(std::ostream &os) const
	{
		os << contents;
	}
	mutable size_t access_ctr = 0;	// ��ʹ��һ��const������Ҳ�ܱ��޸�
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;	// ���õ�ǰ�������λ�õ���ֵ
	return *this;			// ��this������Ϊ��ֵ����
}

void Screen::some_member() const
{
	++access_ctr;	// ����һ������ֵ�����ڼ�¼��Ա���������õĴ���
					// �ó�Ա��Ҫ��ɵ���������
}

inline	// �����ں����Ķ��崦ָ��Inline
Screen &Screen::move(pos r, pos c)
{
	pos row = r*width;	// �����е�λ��
	cursor = row + c;	// �����ڽ�����ƶ���ָ������
	return *this;		// ����ֵ����ʽ�Żض���
}

char Screen::get(pos r, pos c) const	// ������ڲ�������inline
{
	pos row = r*width;	// �����е�λ��
	return contents[row + c];	// ���ظ����е��ַ�
}

void Window_mgr::clear(ScreenIndex i)
{
	// s��һ��Screen�����ã�ָ��������Ҫ��յ��Ǹ���Ļ
	Screen &s = screens[i];
	// ���Ǹ�ѡ����Screen����Ϊ�հ�
	s.contents = string(s.height*s.width, ' ');
}

Window_mgr::Window_mgr()
{
	screens = { Screen(24,80,'a') };
}

void Window_mgr::show()
{
	for (auto& i : screens)
	{
		i.display(cout);
		cout << endl;
	}
}

int main()
{
	/*Window_mgr win1;
	win1.show();
	win1.clear(0);
	win1.show();*/

	/*Screen screen1;
	screen1.set('a');
	screen1.display(cout);*/

	system("pause");
	return 0;
}