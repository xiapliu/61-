#include<iostream>
using namespace std;
int main()
{
	//��ָ���������б���
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int* p = arr;
	for (int i = 1;i < 10;i++)
	{
		cout << "ָ��ָ�������Ϊ��" << *p << endl;

		p++;
	}
	return 0;
}