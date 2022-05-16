#include<iostream>
using namespace std;
void swap1(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "形参a的值为：" << a << endl;
	cout << "形参b的值为：" << b << endl;
}
void swap2(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "形参a的值为：" << a << endl;
	cout << "形参b的值为：" << b << endl;
}
void swap3(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "形参a的值为：" << *p1 << endl;
	cout << "形参b的值为：" << *p2 << endl;
}
int main()
{
	int a = 10;
	int b = 20;
	swap1(a, b);
	cout << "实参a=" << a << endl;
	cout << "实参b=" << b << endl;
	swap2(a, b);
	cout << "实参a=" << a << endl;
	cout << "实参b=" << b << endl;
	swap3(&a,&b);
	cout << "实参a=" << a << endl;
	cout << "实参b=" << b << endl;
	return 0;
}