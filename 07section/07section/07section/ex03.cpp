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

class BitMap;
class Screen;

// ���ص�storeOn����
extern std::ostream& storeOn(std::ostream &, Screen &);
extern BitMap& storeOn(BitMap &, Screen &);

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


struct First
{
	int memi;
	int getMem();
};

struct Second {
	int memi;
	int getMem();
};

//First obj1;
//Second obj2 = obj1;		// ����obj1��obj2�����Ͳ�ͬ


int main()
{
	/*Screen sceen1;
	sceen1.some_member();*/

	//Screen myScreen();
	//// �ѹ���ƶ���һ��ָ����λ�ã�Ȼ�����ø�λ�õ��ַ�ֵ
	//myScreen.move(4, 0).set('#');

	//Screen myScreen(5, 3);
	//const Screen blank(5, 3);
	//myScreen.set('#').display(cout);	// ���÷ǳ����汾
	//blank.display(cout);				// ���ó����汾

	//Screen item1;			// Ĭ�ϳ�ʼ��Sales_data���͵Ķ���
	//class Screen item1;		// һ���ȼ۵�����

#pragma region test
					/*Screen screen1(5, 3, 'a');
	cout << screen1.get() << endl;
	screen1.display(cout);
	Screen const screen2(5, 3, 'b');
	cout << screen2.get() << endl;
	screen2.display(cout);*/
#pragma endregion


	system("pause");
	return 0;
}

struct X {
	friend void f() { /* ��Ԫ�������Զ���������ڲ� */ }
	// X() { f(); }	// ����f��û�б�����
	void g();
	void h();
};
//void X::g() { return f(); }	// ����f��û�б�����
void f();					// �����Ǹ�������X�еĺ���
void X::h() { return f(); }	// ��ȷ������f������������������