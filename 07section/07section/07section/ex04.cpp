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
typedef string::size_type sz;

class Screen {

	// storeOn��ostream�汾�ܷ���Screen�����˽�в���
	friend std::ostream& storeOn(std::ostream &, Screen &);
	// ...


	// Window_mgr�ĳ�Ա���Է���Screen���˽�в���
	friend class Window_mgr;

public:
	typedef std::string::size_type pos;

	// alternative way to declare a type member using a type alias
	// using pos = std::string::size_type;

	Screen &set(char);
	Screen &set(pos, pos, char);
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

inline Screen &Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;	// ���ø���λ�õ���ֵ
	return *this;					// ��this������Ϊ��ֵ�Ż�
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

class Window_mgr {
public:
	// ������ÿ����Ļ�ı��
	using ScreenIndex = std::vector<Screen>::size_type;
	// �򴰿����һ��Screen���������ı��
	ScreenIndex addScreen(const Screen&);
	// ���ձ�Ž�ָ����Screen����Ϊ�հ�
	void clear(ScreenIndex);
private:
	// ���Window_mgr׷�ٵ�Screen
	// Ĭ������£�һ��Window_mgr����һ����׼�ߴ�Ŀհ�Screen
	std::vector<Screen> screens{ Screen(24,80,' ') };
};

void Window_mgr::clear(ScreenIndex i)
{
	// s��һ��Screen�����ã�ָ��������Ҫ��յ��Ǹ���Ļ
	Screen &s = screens[i];
	// ���Ǹ�ѡ����Screen����Ϊ�հ�
	s.contents = string(s.height*s.width, ' ');
}
Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen& s)
{
	screens.push_back(s);
	return screens.size() - 1;
}

int main()
{
	Screen::pos ht = 24, wd = 80;
	Screen scr(ht, wd, ' ');
	Screen *p = &scr;
	char c = scr.get();
	c = p->get();

	system("pause");
	return 0;
}

#pragma region �������Ա���������ֲ���
//typedef double Money;
//string bal;
//class Account {
//public:
//	Money balance() { return bal; }
//private:
//	Money bal;
//	// ...
//};  
#pragma endregion

#pragma region ����Ҫ���⴦��
//typedef double Money;
//class Account {
//public:
//	Money balance() { return bal; }	// ʹ������������Money
//private:
//	typedef double Money;	// ���󣺲������¶���Mney
//	Money bal;
//	// ...
//};  
#pragma endregion

#pragma region ��Ա�����е���ͨ������������ֲ���
// ע�⣺��δ����Ϊ��˵�����ã�����һ�κܺõĴ���
// ͨ������²�����Ϊ�����ͳ�Աʹ��ͬ��������
//int height;		// ������һ�����֣��Ժ���Screen��ʹ��
//class Screen {
//public:
//	typedef std::string::size_type pos;
//	// �������д������Ա�����е����ֲ�Ӧ������ͬ���ĳ�Ա
//	//void dummy_fcn(pos height) {
//	//	//cursor = width*height;	// �ĸ�height?���Ǹ�����
//	//	cursor = width*this->height;	// ��Աheight
//	//	// ����һ����ʾ�ó�Ա�ķ�ʽ
//	//	cursor = width*Screen::height;
//	//}
//
//	// �����д������Ҫ�ѳ�Ա������Ϊ�����������ֲ�����ʹ��
//	void dummy_fcn(pos ht)
//	{
//		cursor = width*height;	// ��Աheight
//	}
//private:
//	pos cursor = 0;
//	pos height = 0, width = 0;
//};
#pragma endregion

#pragma region ��������֮������Χ���������в���
//void Screen::dummy_fcn(pos height) {
//	cursor = width*::height;	// �ĸ�height?���Ǹ�ȫ�ֵ�
//}
#pragma endregion

#pragma region ���ļ������ֵĳ��ִ�������н���
//int height;		// ������һ�����֣��Ժ���Screen��ʹ��
//class Screen {
//public:
//	typedef std::string::size_type pos;
//	void setHeight(pos);
//	pos height = 0;	// ����������������е�height
//};
//Screen::pos verify(Screen::pos);
//void Screen::setHeight(pos var) {
//	// var: ����
//	// height: ��ĳ�Ա
//	// verify: ȫ�ֺ���
//	height = verify(var);
//}  
#pragma endregion
