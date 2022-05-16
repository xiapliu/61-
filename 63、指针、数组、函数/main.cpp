#include<iostream>
using namespace std;
void bubbleSort(int* arr, int len)//冒泡排序
{
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - i - 1;j++)
		{
			//如果j>j+1的值，交换数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printArray(int* arr, int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	//1、先创建一个数组
	int arr[10] = { 2,3,4,5,2,6,3,8,9,1 };
	//数组长度
	int len = sizeof(arr) / sizeof (arr[0]);
	//2、创建函数，实现冒泡排序
	bubbleSort(arr, len);
	//3、打印排序后的数组
	printArray(arr, len);
	return 0;
}