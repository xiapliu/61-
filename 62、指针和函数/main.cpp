#include<iostream>
using namespace std;
void swap1(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "�β�a��ֵΪ��" << a << endl;
	cout << "�β�b��ֵΪ��" << b << endl;
}
void swap2(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "�β�a��ֵΪ��" << a << endl;
	cout << "�β�b��ֵΪ��" << b << endl;
}
void swap3(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "�β�a��ֵΪ��" << *p1 << endl;
	cout << "�β�b��ֵΪ��" << *p2 << endl;
}
int main()
{
	int a = 10;
	int b = 20;
	swap1(a, b);
	cout << "ʵ��a=" << a << endl;
	cout << "ʵ��b=" << b << endl;
	swap2(a, b);
	cout << "ʵ��a=" << a << endl;
	cout << "ʵ��b=" << b << endl;
	swap3(&a,&b);
	cout << "ʵ��a=" << a << endl;
	cout << "ʵ��b=" << b << endl;
	return 0;
}