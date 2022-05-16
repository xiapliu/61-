#include<iostream>
using namespace std;
int main()
{
	//用指针对数组进行遍历
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int* p = arr;
	for (int i = 1;i < 10;i++)
	{
		cout << "指针指向的数据为：" << *p << endl;

		p++;
	}
	return 0;
}