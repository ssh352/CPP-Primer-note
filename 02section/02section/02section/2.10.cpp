#include <iostream>
#include <string>

std::string global_str;	// ��ʼֵΪ�մ�
int global_int;	// ��ʼֵΪ0
int main()
{
	int local_int;	// δ����ʼ����ֵδ���壬���ʻ����
	std::string local_str;	// ��ʼֵΪ�մ�
	std::cout << global_str << local_str << global_int << "\t" << std::endl;
	system("pause");
	return 0;
}